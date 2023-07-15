// 25.08.2021
// Implementation of double queue using linked list.
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
STATUS enque_from_back(Queue **front,Queue **rear,int val);
void deque_from_front(Queue **front);
STATUS enque_from_front(Queue **front,Queue **rear,int val);
void deque_from_back(Queue ** , Queue **);
void display(Queue *q);
void menu();

// Driver Code
int main(){
    Queue *front = NULL, *rear = NULL;
    int num,opr_cd;
    STATUS flag;
    
    while(1){
        printf("\n------------------------------------------------------------------");
        menu();
        printf("\nchoose an option : ");
        scanf("%d",&opr_cd);
        if(opr_cd < 0 || opr_cd > 5){
            printf("\nEnter valid operation code.");
            continue;
        }
        // inserting data from end
        else if(opr_cd == 1){
            printf("\nEnter number to enque from back : ");
            scanf("%d",&num);
            flag = enque_from_back(&front,&rear,num);
            if(flag == MEMFAILED) puts("Memory Failed...\n");
                else printf("%d enqued to end.\n",num);
        }
        // inserting data from start
        else if(opr_cd == 3){
            printf("\nEnter number to enque from start : ");
            scanf("%d",&num);
            flag = enque_from_front(&front,&rear,num);
            if(flag == MEMFAILED) puts("Memory Failed...\n");
                else printf("%d enqued to start.\n",num);
        }
        // deque data from start
        else if(opr_cd == 2){
           if(front == NULL){ 
                printf("\nQueue is underflow nothing to delete.");
                continue;
            }
            num = front->data;
            deque_from_front(&front);
            printf("\n%d removed from queue",num);
        }
        // deque data from end
        else if(opr_cd == 4){
            num = rear->data;
            if(front == NULL){ 
                printf("\nQueue is underflow nothing to delete.");
                continue;
            }
            deque_from_back(&front,&rear);
            printf("\n%d removed from queue",num);
        }
        // displaying data in queue
        else if(opr_cd == 5){
            display(front);
        }
        else if(opr_cd == 0){
            printf("\n\tEXITTED PROGRAM....");
            return 0;
        }
    }
    return 0;
}

// function to insert item in queue from end
STATUS enque_from_back(Queue **front,Queue **rear,int val){
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

// function to insert item in queue from start
STATUS enque_from_front(Queue **front,Queue **rear,int val){
    Queue *tem_node = (Queue*)malloc(sizeof(Queue));
    if(tem_node == NULL)
        return MEMFAILED;
    tem_node->data = val;
    tem_node->next = *front;
     if(*rear == NULL)
        *rear = tem_node;
    *front = tem_node;
    return SUCCESS;
}

//function to delete data from start
void deque_from_front(Queue **front){
    Queue *tem_front = *front;
    *front = tem_front->next;
    free(tem_front);
}

// function to delete from end
void deque_from_back(Queue **front, Queue **last){
    Queue *sec_last;
    Queue *node_to_delete = *front;
    while (node_to_delete->next != NULL){
        sec_last = node_to_delete;
        node_to_delete = node_to_delete->next;
    }
    sec_last->next = NULL;
    *last = sec_last;
    free(node_to_delete);
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

// function to show menu
void menu(){
    printf("\n\n+-------------------------------+\n|             MENU              |\n|-------------------------------|\n|  press 1 -> ENQUE             |\n|  press 2 -> DEQUE             |\n|  press 3 -> ENQUE FROM START  |\n|  press 4 -> DEQUE FROM END    |\n|  press 5 -> DISPLAY QUEUE     |\n|  press 0 -> EXIT              |\n+-------------------------------+\n\n");
}