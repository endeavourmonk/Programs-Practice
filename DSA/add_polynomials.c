// 1.09.2021
// Adding two polynomials.
#include<stdio.h>
#include<stdlib.h>

typedef struct Term Term;
struct Term{
    int cof;
    int exp;
    Term *next_term;
};

typedef enum SIGNAL SIGNAL;
enum SIGNAL{MEMORY_CREATION_FAILED, FAILED, SUCCESS, UNDERFLOW};

// Creating node and inserting coefficient and exponent.
SIGNAL create_term(Term **top, int coe, int pow){
    Term *temp_term = (Term*)malloc(sizeof(Term));
    if(temp_term == NULL)   return MEMORY_CREATION_FAILED;
    temp_term->cof = coe;
    temp_term->exp = pow;
    temp_term->next_term = (*top = NULL) ? NULL : *top;
    *top = temp_term;
}

// function to display stack
SIGNAL display(Term *ptr){
    if(ptr == NULL)
         return UNDERFLOW;
    while(ptr != NULL){
        printf("(%dx^%d) + ",ptr->cof,ptr->exp);    
        ptr = ptr->next_term;
    }
}

// adding polynomial


// Driver Code
int main(){
    Term *p1 = NULL, *p2 = NULL;
    int coef, expo, i=1;
    int choice;
    SIGNAL signal;
    printf("\nEnter First Polynomial ::::::\n");
    while (1){
        printf("\nEnter coefficient and power of term %d :\n",i++);
        scanf("%d%d",&coef,&expo);
        signal = create_term(&p1, coef, expo);
        if(signal == MEMORY_CREATION_FAILED){
            printf("\nMEMORY CREATION FAILED");
            return 0;
        }
        printf("Press any key to enter another term or '0' to quit : \n");
        scanf("%d",&choice);
        if(choice == 0){
            printf("\nIst Polnomial is :\n");
            signal = display(p1);
            if(signal == UNDERFLOW){
                puts("\nNo terms in polynomial");
                break;
            } 
            i = 0;
            break;
        }
    }

    printf("\n\nEnter IInd polynomial ::::::\n\n");
    while (1){
        printf("\nEnter coefficient and power of term %d :\n",i++);
        scanf("%d%d",&coef,&expo);
        signal = create_term(&p2, coef, expo);
        if(signal == MEMORY_CREATION_FAILED){
            printf("\nMEMORY CREATION FAILED");
            return 0;
        }
        printf("Press any key to enter another term or '0' to quit : \n");
        scanf("%d",&choice);
        if(choice == 0){
            printf("\nIInd Polnomial is :\n");
            signal = display(p2);
            if(signal == UNDERFLOW){
                puts("\nNo terms in polynomial");
                break;
            } 
            break;
        }
    }

    // add_polynomial(p1, p2);
    return 0;
}