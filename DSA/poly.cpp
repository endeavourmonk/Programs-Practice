#include<stdio.h>
#include<stdlib.h>

 struct poly{
    int coef;
    int exp;
 };

 struct Node{
     Node *prev;
     poly data;
     Node *next;
 };

enum SIGNAL{MEMORY_CREATION_FAILED, FAILED, SUCCESS, UNDERFLOW};

//  functon to get polynomial
poly get_poly(){
    poly t;
    printf("Enter coefficient");
    scanf("%d",&t.coef);
    printf("Enter exponent");
    scanf("%d",&t.exp);
    return t;
}

// 
SIGNAL add_poly(Node **e, poly d){
    Node *tem, *z;
    tem = (Node *)malloc(sizeof(Node));
    tem->data = d;
    tem->next = tem->prev = NULL;
    if(*e == NULL){
        *e = tem;
        return SUCCESS ;
    }
    for(z= *e; ; z= z->next){
        // case 1: Duplicate term.
        if(z->data.exp == tem->data.exp){
            free(tem);
            z->data.coef += tem->data.coef;
            return SUCCESS;
        }

        // Case 2 : Small term.
        if(tem->data.exp < z->data.exp && z->next == NULL){
                z->next = tem;
                tem->prev = z;
                return SUCCESS;
        }
        // Case 3: Greater term.
        if(tem->data.exp > z->data.exp){
            tem->prev = z->prev;
            tem->next = z;
            z->prev = tem;
            if(z->prev == NULL) {
                *e = tem;
                return SUCCESS;
            }
            tem->prev->next = tem;
            return SUCCESS;
        }
    }
}

//function to display item in queue.
void display(Node *q){
    if(q == NULL){
        printf("\nQueue is empty nothing to display");
        return;
    }
    printf("Polynomial is:\n\n");
    for(; q != NULL ; q = q->next)
        printf("%d  ",q->data);
}

// Driver Code
int main(){
    Node *e1, *e2, *e3;
    e1 = e2 = e3 = NULL;
    int no1, no2;
    poly t;
    printf("Enter number of terms : ");
    scanf("%d",no1);
    printf("Enter number of terms : ");
    scanf("%d",no2);
    for(int i=0; i< no1; i++){
        t = get_poly();
        add_poly(&e1, t);
    }
    printf("\nPOLYNOMIAL I is ::");
    display(e1);
    for(int i=0; i< no2; i++){
        t = get_poly();
        add_poly(&e2, t);
    }
    printf("\nPOLYNOMIAL II is ::");
    display(e2);
    return 0;
}