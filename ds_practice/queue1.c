// 19.08.2021
// Implementation of queue using array
#include<stdio.h>
#include<stdlib.h>
typedef struct Queue Queue;
struct Queue{
    int *val;
    int front;
    int rear;
    int size;
};
// Prototype declaration
void menu();
int is_queue_full(Queue *queue);
Queue* create_queue(int capacity);
int insert(Queue *queue , int n);

typedef enum STATUS STATUS;
enum STATUS {FAILED, SUCCESS, MEMFAILED, EMPTY , FULL};

// Creating queue
Queue* create_queue(int capacity){
    Queue *Q = (Queue*)malloc(sizeof(Queue));
    Q->front = -1;
    Q->rear = -1;
    Q->size = capacity;
    Q->val = (int *)malloc(Q->size * (sizeof(int)));
    return Q;
}

//Inserting data in queue
int insert(Queue *queue , int n){
    if(queue->front == -1)
        queue->front = 0;
    int flag = is_queue_full(queue);
    if(flag == 0)
        return 0;
    queue->val[++queue->rear] = n;
}

// Deleting data from queue
void delete(Queue *queue){
    printf("\n%d is deleted from queue.",queue->val[0]);
    for(int i=0 ; i<queue->rear ; i++)
        queue->val[i] = queue->val[i+1];
    queue->rear--;
}

// Display Queue
void display_queue(Queue *queue){
    if(queue->rear == -1){
        printf("\nQueue is empty Nothing to display");
        return;
    }
    printf("\nQueue is :: \n");
    for(int i=0 ; i<=queue->rear ; i++)
        printf("%d ",queue->val[i]);
}
// checking status of queue
int is_queue_full(Queue *queue){
    if(queue->rear == (queue->size)-1) 
        return 0;
    return 1;
}


// Driver Code
int main(){
    Queue *q;
    int num ,size_queue, opr_cd,flag;
    printf("Enter size of queue : ");
    scanf("%d",&size_queue);
    q = create_queue(size_queue);
    if(q == NULL){
        printf("\nMemory creation failed quitting program");
        exit(0);
    }

    while(opr_cd != 4) {
        printf("\n------------------------------------------------------------------");
        printf("\nfront = %d",q->front);
        printf("\nrear = %d",q->rear);
        menu();
        printf("\nchoose an option : ");
        scanf("%d",&opr_cd);
        if(opr_cd < 1 || opr_cd >4){
            printf("\nEnter valid operation code.");
            continue;
        }
        else if(opr_cd == 1){
            printf("\nEnter number to insert : ");
            scanf("%d",&num);
            flag = insert(q,num);
            if(flag == 0)
                printf("\nQueue has reached maximum limit.");
                continue;
        }
        else if(opr_cd == 2){
            if(q->rear == -1){
                printf("\nQueue is empty nothing to delete");
                continue;
            }
            delete(q);
        }
        else if(opr_cd == 3){
            display_queue(q);
        }
        else if(opr_cd == 4){
            printf("\n\t\tEXITTING PROGRAM....");
            return 0;
        }
    }     
return 0;
}

void menu(){
    printf("\n\n+----------------------+\n|         MENU         |\n|----------------------|\n|  press 1 -> INSERT   |\n|  press 2 -> DELETE   |\n|  press 3 -> DISPLAY  |\n|  press 4 -> EXIT     |\n+----------------------+\n\n");
}