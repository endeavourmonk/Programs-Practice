//Linklist
#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{    //creating node type data
    int data;
    node *link;
};

//Driver Code
int main(){
    node *start;
    //1st node
    start = (node*)malloc(sizeof(node));
    node *temp = start;
    temp -> data = 24;
    int j=0;
  for(node *p = start ; j<3 ; p=p->link,j++){
        temp -> link = (node*)malloc(sizeof(node));
        scanf("%d",&temp->link->data);
        temp = temp->link;
    }

    // //2nd node
    // temp -> link = (node*)malloc(sizeof(node));
    // temp ->link -> data = 25;
    // temp = temp->link;
    // //3rd node
    // temp ->link = (node*)malloc(sizeof(node));
    // temp->link -> data = 26;
    // temp = temp->link;
    // //4th node
    // temp->link = (node*)malloc(sizeof(node));
    // temp -> link -> data = 27;
    // temp = temp->link;
    // //breaking link
    // temp->link = NULL;

//traverse...(visit each of the node one by one)
    for(node *p = start ; p != NULL ; p=p->link){
        printf("%d -> %d\n",p-> data , p->link);
    }
    return 0;
}