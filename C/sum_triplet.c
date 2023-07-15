#include <stdio.h>
#define arr_size 20
int main()
{
    int n, i, j, k;
    int arr[arr_size];
    printf("input number of digits :- ");
    scanf("%d", &n);
    printf("entre elements in array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < (n - 2); i++)
        for (j = (i + 1); j < (n - 1); j++)
            for (k = (j + 1); k < n; k++)
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    printf("congratulations, your triplet whose sum is zero :::::\n");
                    printf("(%d)+(%d)+(%d)=0\n", arr[i], arr[j], arr[k]);
                }
    return 0;
}
