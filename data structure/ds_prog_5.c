//2D array......(11/8/2021)
#include <stdio.h>
#include <stdlib.h>
// typedef int ET;
struct Matrix{
    int **ptr;
    int rows,cols;
};
typedef struct Matrix matrix;

int create_mat(matrix *m);
void input(matrix *m);
void output(matrix);
//Driver Code
int main(){
    matrix m1;
    int status;
    printf("How many rows : ");
    scanf("%d",&m1.rows);
    printf("How many cols : ");
    scanf("%d",&m1.cols);
    status = create_mat(&m1);
    if(status == 0){
        printf("memory creation failed");
        return 0;
    }
    printf("memory created");
    input(&m1);
    output(m1);
    printf("Finished..........");
}

int create_mat(matrix *m){
    int i;
    //array of int pointers..........
    m -> ptr = (int **)malloc(sizeof(int*) * m ->rows);
    // if(m -> ptr NULL) return NULL;
    for(i=0; i< m ->rows; i++){
        *( (m ->ptr) + i) =  (int *)malloc(sizeof(int) * m -> cols); 
    }
}

void destroy_mat(int **mat, int rows){
    int i;
    for(i=0; i<rows; i++){
        free(*(mat+i)) ;
    }
    free(mat);
}


void output(matrix m){    
    int i,j;
    printf("Matrix item : \n");
    for(i=0; i< m.rows; i++){
        for(j=0; j< m.cols; j++){
            printf("%d ",((m.ptr + i)+j));   // a[i][j]
        }
        printf("\n");
    }
}

void input(matrix *m){    
    int i,j;
    printf("Enter matrix item : ");
    for(i=0; i<m->rows; i++){
        for(j=0; j<m->cols; j++)
            scanf("%d",*(*m->ptr + i)+j);   // &a[i][j]
    }
}