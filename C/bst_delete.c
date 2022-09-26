#include<stdio.h>
#include<stdlib.h>

typedef struct Node Node;
struct Node{
    int data;
    Node *lc,*rc;
};

typedef enum STATUS STATUS;
enum  STATUS{MEMFAILED,SUCCESS};

void inorder(Node *root);
STATUS createNode(Node **root,int element);

int menu();
STATUS createNode(Node **root,int element);
void inorder(Node *root);
void delet(Node **t, Node **tem);
int jax(Node **t);

// Driver code
int main()
{
    Node *root;
    int element, ch, num;
    STATUS flag;
    root = NULL;

    while(1){
        ch = menu();
        switch(ch){
            case 1: 
                printf("Enter element you want to push : ");
                scanf("%d",&element);
                flag = createNode(&root,element);
                if(flag == MEMFAILED) printf("Memory not Created\n");
                else printf("Memory Succeed\n");
                break;
            case 2: 
                inorder(root);
                break;
            case 3: printf("enter number you ant to delet : ");
            scanf("%d",&num);
                delet(&root, num);
            case 4 : return 0;
        }
    }
}

STATUS createNode(Node **root,int element){
    Node *temp,*t;
    temp = (Node*)malloc(sizeof(Node));
    if(temp == NULL) return MEMFAILED;
    temp->data = element;
    temp->lc = temp->rc = NULL;
    if(*root == NULL) *root = temp;
    else{
        t = *root;
        while(t != temp){
            if(temp->data < t->data){
                if(t->lc == NULL) t->lc = temp;
                else t = t->lc; 
            }
            else if(temp->data > t->data){
                if(t->rc == NULL) t->rc = temp;
                else t = t->rc;
            }
        }
    }
    return SUCCESS;
}

int menu(){
    int ch;
    printf("\nInsert : 1\n");
    printf("PRINT : 2\n");
    printf("STOP : 3\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    return ch;
}

void inorder(Node *root){
    if(root == NULL) return;
    inorder(root->lc);
    printf("%d\t",root->data);
    inorder(root->rc);
}

void delet(Node **t, Node **tem){
    // If leaf node.
    if((*t)->lc == NULL && (*t)->rc == NULL){
        (*tem)->lc == NULL;
        (*tem)->rc == NULL;
        free(*t);
    }
    else if((*t)->lc == NULL || (*t)->rc == NULL){
        if((*t)->lc != NULL){
            (*tem)->lc = (*t)->lc;
            free(*t);
        }
        if((*t)->rc != NULL){
            (*tem)->rc = (*t)->rc;
            free(*t);
        }
        else if((*t)->lc != NULL && (*t)->rc != NULL){
            int v = jax(&t);
        }
        free(*t);
    }
}

void  findNode(Node **root, int num){
     Node *t=(*root);
     Node *temp;
     while(1){
         if(t->data < num){
             temp = t;
             t = t->rc;
         }
         else if(t->data > num){
             temp = t;
             t = t->lc;
         }
         else
            delet(&t, &temp);
     }
}

int jax(Node **t){
    t = (*t)->lc;
    Node *temp;
    while(9){
        if((*t)->rc !=NULL){
            temp = (*t);
            *t = (*t)->rc;
        }
        else{
            temp->rc = NULL;
            return (*t)->data;
        }
    }
}
