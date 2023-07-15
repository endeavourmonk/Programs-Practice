#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node{
    int data;
    node *left;
    node *right;
};

node* create_node(int v){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = v;     // Setting the data.
    new_node->left = NULL;      // Setting the left child to null.
    new_node->right = NULL;     // Setting the right child to null.
    return new_node;    // Finally returning the created new node.
}

int main(){
    node *root, *p1, *p2;
    
}