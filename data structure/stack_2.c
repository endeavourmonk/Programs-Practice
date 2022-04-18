// 18.08.2021
// implementation of stack using linked list functional approach
#include<stdio.h>
#include<stdlib.h>

typedef struct Stack Stack;
struct Stack{
    int data;
    Stack *next;
};

typedef enum STATUS STATUS;
enum STATUS {FAILED, SUCCESS, MEMFAILED, UNDER_FLOW}; 

int menu();

STATUS push(Stack **, int);
STATUS pop(Stack **, int *);
void display(Stack *);

int main()
{
    Stack *top=NULL;
    int element,ch;
    STATUS flag;
    while(1){
        ch = menu();
        switch(ch){
            case 1: 
                printf("Enter element you want to push : ");
                scanf("%d",&element);
                flag = push(&top,element);
                if(flag == MEMFAILED) puts("Memory Failed...\n");
                else puts("Data Pushed...\n");
                break;
            case 2: 
                flag = pop(&top,&element);
                if(flag == UNDER_FLOW) puts("Stack Empty");
                else printf("Poped Item = %d",element);
                break;
            case 3: 
                display(top);
                break;
            case 4 : return 0;
        }
    }
}


STATUS push(Stack **t, int element)
{
    Stack *temp = (Stack*)malloc(sizeof(Stack));
    if(temp == NULL) return MEMFAILED;
    temp->data = element;
    temp->next = (*t == NULL) ? NULL : *t; 
    *t = temp;
    return SUCCESS;
}

STATUS pop(Stack **t, int *el){
    Stack *temp;
    if(*t == NULL){ return UNDER_FLOW; }
    temp = *t;
    *t = temp->next;
    *el = temp->data;
    free(temp);
    return SUCCESS;
}

void display(Stack *t)
{
    if(t == NULL){ puts("Stack Empty"); return; } 
    for(; t !=NULL; t = t->next){
        printf(" %d",t->data);    
    }  
    printf("\n");
}

int menu()
{
    int ch=1;
    printf("PUSH : 1\n");
    printf("POP : 2\n");
    printf("DISPLAY : 3\n");
    printf("STOP : 4\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    return ch;
}