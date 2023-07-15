#include<stdio.h>
#include<stdlib.h>

typedef struct Node Node;
struct Node{
    Node *prev;
    char ch;
    Node *next;
};

typedef enum SIGNAL SIGNAL;
enum SIGNAL {MEMORY_CREATION_FAILED, SUCCESS, FAILED, UNDERFLOW, OVERFLOW};

// Prototype declaration.
SIGNAL create_Node(Node **top, char c);
void display(Node *q);

// Driver Code
int main(){
    Node *top = NULL;
    SIGNAL flag;
    char c;
    Node *str
    int val=0;

    while (1){
        printf("\n\nEnter character to insert in string :");
        scanf(" %c", &c);
        flag = create_Node(&top, c);
        printf("\nPress ';' to exit and any key to continue :");
        scanf(" %c",&val);
        if("val == ';'"){
			printf("Exitting...");
			display(top);
			exit(0);
        }
    }
    display(top);
    return 0;
}

// Function to create Node and enter character.
SIGNAL create_Node(Node **top, char c){
    Node *tem = (Node*)malloc(sizeof(Node));
    if(tem == NULL)
        return MEMORY_CREATION_FAILED;
    tem->ch = c;
    tem->next = tem->prev = NULL;
    if(*top != NULL){
        (*top)->next = tem;
        tem->prev = *top;
    }
    *top = tem;
    return SUCCESS;
}

// function to display string.
void display(Node *q){
    if(q == NULL){
        printf("\nString is empty nothing to display");
        return;
    }
    printf("String is :\n\n");
    for(; q != NULL ; q = q->prev)
        printf("%c  ",q->ch);
}
