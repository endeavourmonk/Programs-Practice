#include<stdio.h>
#include<stdlib.h>

typedef struct Node Node;
struct Node{
    Node *prev;
    char ch;
    Node *next;
};

enum SIGNAL {MEMORY_CREATION_FAILED, SUCCESS, FAILED, UNDERFLOW, OVERFLOW};
typedef enum SIGNAL SIGNAL;

// Prototype declaration.
SIGNAL create_Node(Node **top, char c);
void display(Node *q);
Node* reverse(Node *head);

// Driver Code
int main(){
    Node *top = NULL;
    SIGNAL flag;
    char c;
    Node *str;
    int val=0;

    printf("\n\nEnter characters to enter in string and press ';' to exit :");
    while (c != ';'){
        scanf(" %c", &c);
         if(c == ';'){
			printf("Exitting...");
			display(top);
			break;
        }
        flag = create_Node(&top, c);
        if(flag == MEMORY_CREATION_FAILED){
            printf("\nFailed to allocate memory to stack, exitting..");
            return 0;
        }
    }
    // str = reverse(top);
    // printf("\n\nString after reversing : ");
    // display(str);
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

// function to reverse stack.
Node* reverse(Node *head){
    Node *tem = NULL;
    Node *str = NULL;
    for(; head != NULL; head = head->prev){
        tem = (Node *)malloc(sizeof(Node));
        tem->ch = head->ch;
        tem->next = (str == NULL) ? NULL : str;
        tem->prev = NULL;
    }
    return tem;
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
