// Double linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct Node Node;
struct Node{
    Node *prev;
    int data;
    Node *next;
};

typedef enum SIGNAL SIGNAL;
enum SIGNAL{MEMORY_CREATION_FAILED, FAILED, SUCCESS, UNDERFLOW};

// inserting data and creating node.
SIGNAL insert(Node **Ptr, int val){
    Node *tem = (Node *)malloc(sizeof(Node));
    if(tem == NULL) return MEMORY_CREATION_FAILED;
    tem->data = val;
    tem->prev = (*Ptr == NULL) ? NULL : *Ptr;
    tem->next = (*Ptr == NULL) ? NULL : *Ptr;
}

// Driver code
int main(){
    Node *ptr = NULL;
    

}