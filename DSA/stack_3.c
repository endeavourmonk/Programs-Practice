//18.08.2021
// implementation of stack using linked list 
#include<stdio.h>
#include<stdlib.h>

typedef struct Stack Stack;
struct Stack{
    int data;
    Stack *next;
};

int menu();

int main()
{
    Stack *top=NULL;
    int element,ch;
    Stack *temp=NULL;
    while(1){
        ch = menu();
        switch(ch){
            case 1: 
                printf("Enter element you want to push : ");
                scanf("%d",&element);
                //create a node
                temp = (Stack*)malloc(sizeof(Stack));
                //check is node created
                //if not created
                if(temp == NULL){
                    puts("Memory Failed...");
                }
                //created
                else
                {
                    //set all fields....
                    temp->data = element;
                    temp->next = NULL;
                    //check is stack empty
                    //yes=>created node becomes first node of stack
                    if(top == NULL){ top = temp; }
                    //no=>
                    else{
                        temp->next = top;
                        top = temp;       
                    }
                }
                break;
            case 2: 
                if(top == NULL){ puts("Stack Empty"); }
                else{
                    temp = top;
                    top = top->next;
                    element = temp->data;
                    free(temp);
                    printf("Poped Item = %d",element);
                }
                break;
            case 3: 
                if(top == NULL){ puts("Stack Empty"); }
                else{
                    temp = top;
                    while(temp !=NULL){
                        element = temp->data;
                        printf(" %d",element);
                        temp = temp->next;    
                    }
                }
                break;
            case 4 : return 0;
        }
    }
}

int menu()
{
    int ch;
    printf("PUSH : 1\n");
    printf("POP : 2\n");
    printf("DISPLAY : 3\n");
    printf("STOP : 4\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    return ch;
}