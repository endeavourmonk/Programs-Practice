// Date : 27.09.2021
#include<stdio.h>
#include<stdlib.h>

typedef struct Number Number;
struct Number{
    Number *prev;
    int data;
    Number *next;
};

typedef enum STATUS STATUS;
enum STATUS{MEMORY_CREATION_FAILED, SUCCESS , FAILURE , OVERFLOW, UNDERFLOW};

STATUS insert(Number **front,Number **rear,int val);
STATUS sum(Number **Rh, Number **Rt, Number *I1, Number *I2);
void display(Number *q);
void displaySum(Number *q);

// Driver Code
int main(){
    Number *Num1Head = NULL, *Num1Tail = NULL;
    Number *Num2Head = NULL, *Num2Tail = NULL;
    Number *ResHead = NULL , *ResTail = NULL;
    char ch = 0;
    int val;
    // Inputting first number
    printf("Enter Ist Number :\n");
    while(1){ 
        printf("Enter digit\n");
        scanf("%d", &val);
        printf("Press any key to continue or Press ';' to enter another one.\n");
        scanf("%c", &ch);
        if(ch == ';')
            break;
        insert(&Num1Head, &Num1Tail, val);
    }
        
    // Inputting second number
    printf("\n\nEnter IInd Number :\n");
    while(1){ 
        printf("Enter digit\n");
        scanf("%d", &val);
        printf("Press any key to continue or Press ';' to enter another one.\n");
        scanf("%c", &ch);
        if(ch == ';')
            break;
        insert(&Num2Head, &Num2Tail, val);
    }
    printf("\n\nsum ::::::\n");
    display(Num1Head);
    printf("\n");
    display(Num2Head);
    printf("\n-----------------------------------------\n");
    sum(&ResHead, &ResTail, Num1Tail, Num2Tail);
    displaySum(ResTail);
    return 0;
}

// Adding both numbers
STATUS sum(Number **Rh, Number **Rt, Number *I1, Number *I2){
    Number **Th = NULL, **Tt = NULL;
    int carry=0, sum;
    if(I1 == NULL || I2 == NULL)
        return UNDERFLOW;
    while(I1 != NULL && I2 != NULL){
        sum = I1->data + I2->data;
        if(sum > 9){
            sum %= 10;
            carry = sum /10;
        }
        sum += carry;
        insert(&Th, &Tt, sum);
        carry = 0;
        I1 = I1->prev;
        I2 = I2->prev;
    }
    *Rh = Th;
    *Rt = Tt;
    return SUCCESS;
}

STATUS insert(Number **front,Number **rear,int val){
    Number *tem_queue = (Number*)malloc(sizeof(Number));
    if(tem_queue == NULL) 
        return MEMORY_CREATION_FAILED;
    tem_queue->data = val;
    tem_queue->next = NULL;
    tem_queue->prev = NULL;
    if(*front == NULL){
        *front = tem_queue;
    }
    else{
        (*rear)->next = tem_queue;         
        tem_queue->prev = *rear;
    }
    *rear = tem_queue;
    return SUCCESS;
}

//function to display item in queue.
void display(Number *q){
    if(q == NULL){
        printf("\nQueue is empty nothing to display");
        return;
    }
    for(; q != NULL ; q = q->next)
        printf("%d",q->data);
}

void displaySum(Number *q){
    if(q == NULL){
        printf("\nQueue is empty nothing to display");
        return;
    }
    for(; q != NULL ; q = q->prev)
        printf("%d",q->data);
}