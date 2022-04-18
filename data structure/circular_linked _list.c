// 26.08.2021
// implementation of circular linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct Node Node;
struct Node{
    int val;
    Node *next;
};

typedef enum STATUS STATUS;
enum STATUS {MEMORY_CREATION_FAILED, SUCCESS , FAILURE , OVERFLOW, UNDERFLOW};

// Prototype declaration
STATUS insert_data();

//Driver Code
int main(){
    Node *head = NULL ,*tail = NULL;

}