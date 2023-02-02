#include<stdio.h>
#include<stdlib.h>

typedef struct Node Node;
struct Node{
    Node *left;
    int data;
    Node *right;
};

typedef enum STATUS STATUS;
enum STATUS{MEMORY_CREATION_FAILED, SUCCESS , FAILURE , EMPTY};

int main(){
    
}