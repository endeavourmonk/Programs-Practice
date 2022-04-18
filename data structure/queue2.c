// 19.08.2021
// Implementation of queue using linked list.
#include<stdio.h>
#include<stdlib.h>

typedef struct Queue Queue;
struct Queue{
    int data;
    Queue *next;
};

typedef enum STATUS STATUS;
enum STATUS {FAILED, SUCCESS, MEMFAILED, UNDER_FLOW};

// Prototype declaration
STATUS insert(Queue **front,Queue **rear,int val);
void display(Queue *q);
void delete(Queue **front);
void menu();

// Driver Code
int main(){
    Queue *front = NULL, *rear = NULL;
    int num,opr_cd;
    STATUS flag;
    
    while(opr_cd != 4){
        printf("\n------------------------------------------------------------------");
        menu();
        printf("\nchoose an option : ");
        scanf("%d",&opr_cd);
        if(opr_cd < 1 || opr_cd >4){
            printf("\nEnter valid operation code.");
            continue;
        }
        // inserting data
        else if(opr_cd == 1){
            printf("\nEnter number to insert : ");
            scanf("%d",&num);
            flag = insert(&front,&rear,num);
            if(flag == MEMFAILED) puts("Memory Failed...\n");
                else puts("Data inserted.\n");
        }
        // deleting data
        else if(opr_cd == 2){
            if(front == NULL){ 
                printf("\nQueue is underflow nothing to delete.");
                continue;
            }
            num = front->data;
            delete(&front);
            printf("\n%d removed from queue",num);
        }
        // displaying data in queue
        else if(opr_cd == 3){
            display(front);
        }
        else if(opr_cd == 4){
            printf("\n\tEXITTED PROGRAM....");
            return 0;
        }
    }
    return 0;
}

// function to show menu
void menu(){
    printf("\n\n+----------------------+\n|         MENU         |\n|----------------------|\n|  press 1 -> INSERT   |\n|  press 2 -> DELETE   |\n|  press 3 -> DISPLAY  |\n|  press 4 -> EXIT     |\n+----------------------+\n\n");
}
// function to insert item in queue
STATUS insert(Queue **front,Queue **rear,int val){
    Queue *tem_queue = (Queue*)malloc(sizeof(Queue));
    if(tem_queue == NULL) 
        return MEMFAILED;
    tem_queue->data = val;
    tem_queue->next = NULL;
    if(*front == NULL)
        *front = tem_queue;
    else
        (*rear)->next = tem_queue;         
    *rear = tem_queue;
    return SUCCESS;
}

//function to display item in queue.
void display(Queue *q){
    if(q == NULL){
        printf("\nQueue is empty nothing to display");
        return;
    }
    printf("Data in Queue :\n\n");
    for(; q != NULL ; q = q->next)
        printf("%d  ",q->data);
}

//function to delete data
void delete(Queue **front){
    Queue *tem_front = *front;
    *front = tem_front->next;
    free(tem_front);
}