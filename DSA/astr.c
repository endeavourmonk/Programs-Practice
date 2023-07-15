#include<stdio.h>
#include<stdlib.h>

typedef int Data;

typedef struct a_node
{
    Data*   data;

    struct a_node *prev;
    struct a_node *next;

} Node;

typedef struct
{
    Node* head;
    Node* tail;

    int size;

}   List;

List *create_list();
int   insert_list(Data *, List *);
int   show_list(List *);

List *create_list()
{
    List* list = (List*) malloc(sizeof(List));
    if (list == NULL) return NULL;
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

int insert_list(Data *data, List *L)
{
    // insert at the head, return new size
    Node *node    = (Node *)malloc(sizeof(Node));
    node->next    = L->head;  // new starting node
    node->prev    = NULL;
    node->data    = (Data *)malloc(sizeof(Data));
    *(node->data) = *data;  // plain copy
    // adjusts the pointers
    if (L->size == 0)
    {
        L->head = node;
        L->tail = node;
    }
    else
    {
        L->head->prev = node; // now prev head follows this
        L->head       = node; // and we have new head
    }
    L->size += 1;  // + 1
    return L->size;
}

int     show_list(List* L)
{
    if (L == NULL)
    {
        printf("There is no list: nothing to display");
        return -1;
    }
    printf("List has %d elements ", L->size);
    if ( L->size > 0 )
        printf("(1st is '%c', last is '%c'): [ \"",
            *(L->head->data), *(L->tail->data)
            );
    Node *p = L->head;
    for (int i = 0; i < L->size; i += 1)
    { 
        printf("%c", *(p->data));
        p = p->next;
    }
    printf(" \"]\n\n");
    return L->size;
}

int main(void)
{
    const char value[] = "wolfrevO kcatS";
    List *one = create_list();
    if (one == NULL) return -1;

    char *p = (char*)value;
    while ( *p != 0 )
    { 
        insert_list((Data*)p, one);
        p += 1;
    }
    show_list(one);
    return 0;
}