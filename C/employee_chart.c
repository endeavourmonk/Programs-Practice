#include <stdio.h>
#include <stdlib.h>
struct worker{
    char name[50];
    int age;
    double salary;
};
int main()
{
    struct worker *ptr;
    int n;
    printf("enter number of employee : ");
    scanf("%d", &n);
    ptr = (struct worker *)malloc(n * sizeof(struct worker));

    for (int i = 0; i < n; ++i){
        printf("For employee :- %d \n ", i + 1);
        printf("Enter your name : \n");
        getchar();
        fgets((ptr+i)->name, 30, stdin);
        printf("Enter salary:\n ");
        scanf("%lf", &(ptr + i)->salary);
        printf("Enter age : \n");
        scanf("%d", &(ptr + i)->age);
    }
printf("\n:::::::::::::::::::::Employee chart::::::::::::::::::\n");
    for (int i = 0; i < n; ++i){
        printf("Employee %d :- \n", i + 1);
        printf("name = %s",(ptr+i)->name);
        printf("age = %d, ", (ptr + i)->age);
        printf("salary = %.2lf\n\n", (ptr + i)->salary);
    }
    free(ptr);
    return 0;
}