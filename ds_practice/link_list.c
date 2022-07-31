//Linklist
#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
    int data;
    node *link;
};

//Driver Code
int main(){
    
    node *start;
    start = (node*)malloc(sizeof(node));
    start -> data = 24;
    
    start -> link = (node*)malloc(sizeof(node));
    start -> link -> data = 66;
    
    start -> link ->link = (node*)malloc(sizeof(node));
    start -> link->link -> data = 66;
    
    start ->link -> link ->link = (node*)malloc(sizeof(node));
    start -> link -> link ->link -> data = 66;

    start ->link -> link ->link->link = NULL;

//traverse...(visit each of the node one by one)
    for(node *p = start ; p != NULL ; p=p->link){
        printf("%d -> %u\n",p-> data , p->link);
    }
    return 0;
}