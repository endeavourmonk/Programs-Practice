#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct int_buf {
    int *data;
    size_t cap;
    int *last;
};

void * xrealloc(void *buf, size_t num, size_t siz, void *endvp);

void
push(struct int_buf *b, int v)
{
    if( b->last >= b->data + b->cap ){
        b->cap += 128;
        b->data = xrealloc(b->data, b->cap, sizeof v, &b->last);
    }
    *b->last++ = v;
}

void
show(const char *msg, const struct int_buf *b)
{
    printf("The %s numbers are: ", msg);
    for( int *p = b->data; p < b->last; p++ ){
        printf("%d%s", *p, p + 1 == b->last ? "\n" : ", ");
    }
}

int
main(void)
{
    struct int_buf even = {NULL, 0, 0};
    struct int_buf odd = {NULL, 0, 0};
    int s = snprintf(NULL, 0, "%d", INT_MAX);
    char fmt[128];
    int v;

    snprintf(fmt, sizeof fmt, "%%%dd", s - 1);

    while( 1 == scanf(fmt, &v) ){
        if( v % 2 ){
            push(&odd, v);
        } else {
            push(&even, v);
        }
    }

    show("odd", &odd);
    show("even", &even);

    return 0;
}

void *
xrealloc(void *buf, size_t num, size_t siz, void *endvp)
{
    char **endp = endvp;
    char *b = buf;
    ptrdiff_t offset = b && endp && *endp ? *endp - b : 0;
    b = realloc(b, num * siz);
    if( b == NULL ){
        perror("realloc");
        exit(EXIT_FAILURE);
    }
    if( endp != NULL ){
        *endp = b + offset;
    }
    return b;
}