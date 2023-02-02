#include <stdio.h>
#include <stdlib.h>

typedef enum status status;
enum status{MEMFAILED,UNDERRFLOW,SUCCESS};

typedef struct poly poly;
struct poly{
    int coef;
    int expo;
};

typedef struct node node;
struct node{
    node *prev;
    node *next;
    poly data;
};

poly get_poly(poly t){
    printf("\nenter coeficient : ");
    scanf("%d", &t.coef);
    printf("\nenter exponent : ");
    scanf("%d", &t.expo);
    return t;
}

status input_poly(node **e1,poly d){
    node *t;
    t=(node*)malloc(sizeof(node));
    if (t == NULL)
        printf("memory creation failed");
    else{
        t->data = d;
        t->next = t->prev = NULL;
        if (*e1 == NULL){
            *e1 = t;
            return SUCCESS;
        }
        else{
            for (node *z =(*e1) ;; z = z->next){
                if (z->data.expo == t->data.expo){
                    z->data.coef += t->data.coef;
                    free(t);
                    return SUCCESS;
                }
                if (z->data.expo > t->data.expo){
                    if (z->next == NULL){
                        z->next = t;
                        t->prev = z;
                    }
                    else{
                        z->next->prev=t;
                        t->next=z->next;
                        t->prev=z;
                        z->next=t;
                    }
                    return SUCCESS;
                }
                if (z->data.expo < t->data.expo){
                    z->prev = t;
                    t->next = z;
                    *e1 = t;
                    return SUCCESS;
                }
            }
        }
    }
}

void display(node * e1){
    for (; e1 != NULL; e1 = e1->next)
        printf("%dx^%d  ", e1->data.coef, e1->data.expo);
    printf("\n");
}

void create_node(node **ptr, poly val){
    node *tem = (node*)malloc(sizeof(node));
    if(tem == NULL) 
        printf("MEMFAILED");
    tem->data = val;
    tem->next = (*ptr == NULL) ? NULL : *ptr;
    *ptr = tem;
}


// function to add polynomial
node* add_poly(node *poly1, node *poly2){
    node *res = NULL;
    poly val;
    while (poly1->next  && poly2->next){
        // if exponent of 1st polynomial is greater than 2nd.
        if(poly1->data.expo > poly2->data.expo){
            val = poly1->data;
            create_node(&res, val);
            poly1 = poly1->next;
        }
        // If power of 2nd polynomial is greater then 1st.
        else if(poly1->data.expo < poly2->data.expo){
            val = poly2->data;
            create_node(&res, val);
            poly2 = poly2->next;
        }
        // If power of both polynomials sre same.
        else{
            val.coef = poly1->data.coef + poly2->data.coef;
            val.expo = poly1->data.expo;
            create_node(&res, val);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1->next || poly2->next){
         if (poly1->next) {
            val = poly1->data;
            create_node(&res, val);
            poly1 = poly1->next;
        }
         if (poly2->next) {
            val = poly2->data;
            create_node(&res, val);
            poly2 = poly2->next;
        }
    }
    display(res);
    return res;
}

// Driver Code
    int main(){
        node *e1=NULL;
        node *e2=NULL;
        node *e3=NULL;
        poly d,d1;
        int code;
        status flag;
        while (1){
            printf("\n\nselect operation\nInput polynomial first->1\ninput polynomial second->2\nAddition->3\nDisplay first polynomials->4\nDisplay second polynomial->5\nstop->6\n\n");            
            scanf("%d",&code);
            switch (code){
            case 1:
                d1 = get_poly(d);
                flag = input_poly(&e1,d1);
                if (flag == SUCCESS)
                    printf("term added in first euqation");
                break;
            case 2:
                d1= get_poly(d);
                flag=input_poly(&e2,d1);
                 if(flag==SUCCESS)
                   printf("term added in second equation");
            case 3:
                add_poly(e1,e2);
            //     display(e3);
                break;
            case 4:
                display(e1);
                break;
            case 5:
                display(e2);
                break;
            case 6:
                return 0;
            }
        }
    return 0;
    }