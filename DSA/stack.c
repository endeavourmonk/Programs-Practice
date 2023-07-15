#include<stdio.h>
#include<stdlib.h>
typedef struct stack stack;
struct stack{
    int size;
    int *arr;
    int top;
};

void menu();
int * create_stack(int capacity , int *top);
void push(int *ptr , int *top , int data);
void pop(int *arr,int *top);
int is_stack_empty(int *p,int size,int top);
void display(int *arr , int top);

//Driver Code
int main(){
    int size,data,menu_code=0,flag;
    stack s;
    printf("Enter size of stack : ");
    scanf("%d",&s.size);
    
    //stack creation
    s.arr = create_stack(s.size,&s.top);
    printf("\nValue of top =%d",s.top);
    while(menu_code != 4){
        menu();
        printf("\nEnter code : ");
        scanf("%d",&menu_code);
        if(menu_code >0 && menu_code<5){
            if(menu_code == 4){
               printf("\n\texitting program\n");
                return 0;
            }
                //pushing if stack empty
                if(menu_code==1){
                    flag = is_stack_empty(s.arr,s.size,s.top);
                    if(flag==1){
                        printf("\nEnter number to push : ");
                        scanf("%d",&data);
                        push(s.arr,&s.top,data);
                        printf("\nvalue of top =%d",s.top);
                        printf("\ndata is %d",s.arr[s.top]);
                        goto end;
                    }
                    printf("\nstack is full.");
                }

                //popping if stack contains data
                else if (menu_code == 2){
                    if(s.top == -1){
                        printf("\nstack is empty, nothing to pop");
                        goto end;
                    }
                    pop(s.arr,&s.top);
                    printf("\nvalue of top = %d",s.top);
                    goto end;
                }
                else if(menu_code==3){
                    printf("\nFull stack is ::\n");
                    display(s.arr ,s.top);
                    goto end;
                }
                
        }
        printf("\nPress valid code");
        end:
        printf("\n---------------------- Again choose from menu ------------------------");
    }
    return 0;
}

int * create_stack(int capacity , int *top){
    int *memory = (int *)malloc(capacity*sizeof(int));
    *top = -1;
    if(memory != NULL){
        printf("\nstack created successfully of size %d",capacity);
        return memory;
    }
    printf("\nstack creation failed");
    exit(0);
} 

void push(int *ptr , int *top , int data){
    *top = (*top) + 1;
    *(ptr + (*top)) = data;
}
void pop(int *arr,int *top){
    printf("\n%d popped from stack",*(arr + (*top)));
    *top = *top -1;
}

int is_stack_empty(int *p,int size,int top){
    if(top < (size-1))
        return 1;
    return 0;
}
void display(int *arr , int top){
    for(int i=top ; i>=0; i--)
        printf("%d |",*(arr+i));
}
void menu(){
    printf("\n\n+----------------------+\n|         MENU         |\n|----------------------|\n|  press 1 -> push     |\n|  press 2 -> pop      |\n|  press 3 -> display  |\n|  press 4 -> exit     |\n+----------------------+\n\n");
}