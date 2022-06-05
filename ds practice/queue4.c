// 27.08.2021
// Implementaion of queue using linked list.
// Inserting data between specific data.
#include<stdio.h>
#include<stdlib.h>

typedef struct Queue Queue;
struct Queue{
    int data;
    Queue *next;
};

typedef enum STATUS STATUS;
enum STATUS{MEMORY_CREATION_FAILED, SUCCESS , FAILURE , OVERFLOW, UNDERFLOW};

// Prototype declaration
STATUS insert(Queue **front,Queue **rear,int val);
STATUS insertBeforeData(Queue **, int, int);
void delete(Queue **front);
void deleteBeforeData();
void display(Queue *q);
void menu();

int main(){
    Queue *front = NULL, *rear = NULL;
    int num, opr_cd, val;
    STATUS flag;
    
    while(1){
        printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------");
        menu();
        printf("\nchoose an option : ");
        scanf("%d",&opr_cd);
        if(opr_cd < 1 || opr_cd >6){
            printf("\nEnter valid operation code.");
            continue;
        }
        switch (opr_cd){
            // Inserting data
            case 1:
                    printf("\nEnter number to insert : ");
                    scanf("%d",&num);
                    flag = insert(&front,&rear,num);
                    if(flag == MEMORY_CREATION_FAILED)  puts("Memory Failed...\n");
                    else puts("Data inserted.\n");
                break;
            // deleting data
            case 2:
                    if(front == NULL){ 
                        printf("\nQueue is underflow nothing to delete.");
                        continue;
                    }
                    num = front->data;
                    delete(&front);
                    printf("\n%d removed from queue",num);
                break;
            // displaying data in queue
            case 5:
                    display(front);
                break;
            // Inserting node before data.
            case 3:
                    printf("\nEnter data:");
                    scanf("%d",&num);
                    printf("\nEnter value to insert before %d",num);
                    scanf("%d",&val);
                    flag = insertBeforeData(&front, num, val);
                    if(flag == FAILURE)  printf("\n%d not found.",num);
                    else printf("\ndata inserted successfully.");
                break;
            case 6:
                    printf("\n\tEXITTED PROGRAM....");
                    return 0;
        }
    }
    return 0;
}

// function to insert item in queue
STATUS insert(Queue **front,Queue **rear,int val){
    Queue *tem_queue = (Queue*)malloc(sizeof(Queue));
    if(tem_queue == NULL) 
        return MEMORY_CREATION_FAILED;
    tem_queue->data = val;
    tem_queue->next = NULL;
    if(*front == NULL)
        *front = tem_queue;
    else
        (*rear)->next = tem_queue;         
    *rear = tem_queue;
    return SUCCESS;
}

// function to insert node before data.
STATUS insertBeforeData(Queue **front, int num, int val){
    Queue *temp, *tem_front = *front;
    Queue *prev_node = NULL;
    STATUS signal;
    while(tem_front->data != num){
        prev_node = tem_front;
        tem_front = tem_front->next;
        if(tem_front == NULL) return FAILURE;
    }
    temp = tem_front;
    signal = insert(*front, &tem_front, val);
    if(signal == MEMORY_CREATION_FAILED) printf("\nMEmory creation failed.");
    prev_node->next = tem_front;
    tem_front->next = temp;
    printf("\n\nqueue after is ");
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

// function to display menu.
void menu(){
    printf("\n\n+-------------------------------+\n|        OPERATION MENU         |\n|-------------------------------|\n|  press 1 -> ENQUE             |\n|  press 2 -> DEQUE             |\n|  press 3 -> ENQUE BEFORE DATA |\n|  press 4 -> DEQUE BEFORE DATA |\n|  press 5 -> DISPLAY QUEUE     |\n|  press 6 -> EXIT              |\n+-------------------------------+\n\n");
}