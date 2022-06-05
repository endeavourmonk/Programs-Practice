#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node
{
    int data;
    Node *lc, *rc;
};
typedef enum STATUS STATUS;
enum STATUS
{
    MEMFAILED,
    SUCCESS
};

void inorder(Node *root);
STATUS createNode(Node **root, int element);

int menu();
STATUS createNode(Node **root, int element);
void inorder(Node *root);
int delet(Node **t, Node **tem);
int jax(Node **t);
void findNode(Node **root, int num);

// Driver code
int main()
{
    Node *root;
    int element, ch, num;
    STATUS flag;
    root = NULL;

    while (1)
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            printf("Enter element you want to push : ");
            scanf("%d", &element);
            flag = createNode(&root, element);
            if (flag == MEMFAILED)
                printf("Memory not Created\n");
            else
                printf("Memory Succeed\n");
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            if(root==NULL){
            printf("first insert number in BST");
            }
            else{
            printf("enter number you ant to delet : ");
            scanf("%d", &num);
            findNode(&root, num);
            }    
            break;
        case 4:
            return 0;
        }
    }
}

STATUS createNode(Node **root, int element)
{
    Node *temp, *t;
    temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
        return MEMFAILED;
    temp->data = element;
    temp->lc = temp->rc = NULL;
    if (*root == NULL)
        *root = temp;
    else
    {
        t = *root;
        while (t != temp)
        {
            if (temp->data < t->data)
            {
                if (t->lc == NULL)
                    t->lc = temp;
                else
                    t = t->lc;
            }
            else if (temp->data > t->data)
            {
                if (t->rc == NULL)
                    t->rc = temp;
                else
                    t = t->rc;
            }
        }
    }
    return SUCCESS;
}

int menu()
{
    int ch;
    printf("\nINSERT :   [1]\n");
    printf("PRINT    : [2]\n");
    printf("DELETE   : [3]\n");
    printf("EXIT     : [4]\n");

    printf("Enter your choice : ");
    scanf("%d", &ch);
    return ch;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->lc);
    printf("%d\t",root->data);
    inorder(root->rc);
}

int delet(Node **t, Node **tem)
{
    // If  node is leaf node .............................
    if ((*t)->lc == NULL && (*t)->rc == NULL)
    {
        if((*t)->data==(*tem)->data)
        {
            printf("Deleted number is %d", (*t)->data);
            free(*t);
            return 0;
        }
        if ((*tem)->data > (*t)->data)
        {
            (*tem)->lc = NULL;
             printf("Deleted number is %d", (*t)->data);
             free(*t);
             return 0;
        }
        if((*tem)->data < (*t)->data)
        {
              (*tem)->rc = NULL;
              printf("Deleted number is %d", (*t)->data);
              free(*t);
              return 0;
        }        
    }
    //if node has only one child...........................
    if ((*t)->lc == NULL || (*t)->rc == NULL)
    {
        if ((*t)->lc != NULL)
        {
            (*tem)->lc = (*t)->lc;
            printf("Deleted number is %d", (*t)->data);
            free(*t);
            return 0;
        }
        if ((*t)->rc != NULL)
        {
            (*tem)->lc = (*t)->rc;
            printf("Deleted number is %d", (*t)->data);
            free(*t);
            return 0;
        }
    }
    //if node have both child..............................
    if ((*t)->lc != NULL && (*t)->rc != NULL)
    {
        int v = jax(t);
        printf("Deleted number is %d", (*t)->data);
        (*t)->data = v;
     return 0;   
    }
}

void findNode(Node **root, int num)
{
    Node *t = (*root);
    Node *temp =t;
    while (1)
    {
        if (t->data < num)
        {
            temp = t;
            t = t->rc;
        }
        else if (t->data > num)
        {
            temp = t;
            t = t->lc;
        }
        else if (t->data == num)
        {
            delet(&t, &temp);
            break;
        }        
    }
}

int jax(Node **t)
{
    Node *t1 = (*t);
    Node *temp =t1;
    t1 = t1->lc;
    while (1)
    {
        if (t1->rc != NULL)
        {
            temp = t1;
            t1 = t1->rc;
        }
        else
        {
            int max;
            if((*t)!=temp)
                temp->rc = NULL;
            else
                temp->lc = NULL;
            max = t1->data;
            free(t1);
            return max;
        }
    }
}