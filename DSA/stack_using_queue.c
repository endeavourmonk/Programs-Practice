// Creating stack using queue
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
void display(Queue *q);

int main(){
    Queue *front = NULL, *rear = NULL;
    int num, opr_cd, val;
    STATUS flag;
    
    
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