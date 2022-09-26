#include<stdio.h>
main()
{
    int l,n,c;
    printf("enetr value of 'n'");
    scanf("%d",&n);
    for (l=1 ; l<=n ; l++)
    {
        for(c=1 ; c<=n-l ; c++)
        {
            printf(" ");
        }
            for (c=1; c<=l ; c++)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}

