#include <stdio.h>
int main()
{
    int H, A, P, P1, Y, H1, O, L, I, n, spc;
    int h, a, p, p1, y, h1, o, l, i;
    char sym;
    printf("enter symbol\n");
    scanf("%c", &sym);
    printf("enter value_");
    scanf("%d", &n);
    ///////////////////printing H  ............
    for (H = 1; H <= n; H++)
    {
        for (h = 1; h <= n / 4; h++)
            printf("%c", sym);
        if (H == (n / 2) || H == ((n / 2) + 1))
            for (a = 0; a < n / 2; a++)
                printf("%c", sym);
        else
            for (spc = 0; spc < n / 2; spc++)
                printf(" ");
        for (P = 1; P <= n / 4; P++)
            printf("%c", sym);
        printf("\n");
    }
    printf("\n\n");

    for (a = (n + 1) / 2, h = (n + 1) / 2; a > 0 && h <= n; a--, h++)
    {
        for (spc = 1; spc <= n; spc++)
        {
            if (spc == a || spc == h)
                printf("%c", sym);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");

    /////////////////////printing P..................
    for (P = 1; P <= n; P++)
    {
        for (p = 1; p <= n / 4; p++)
            printf("%c", sym);
        if (P == 1 || P == n / 2)
        {
            for (P1 = 1; P1 <= n / 8; P1++)
            {
                for (p1 = 1; p1 <= n / 2; p1++)
                    printf("%c", sym);
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}