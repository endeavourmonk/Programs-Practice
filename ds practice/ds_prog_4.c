//2D array......(11/8/2021)
#include <stdio.h>
#include <stdlib.h>

void input(int **a ,int rows, int cols);
int ** create_mat(int rows, int cols);
void destroy_mat(int **mat, int rows);
void output(int **,int, int);
//Driver Code
int main(){
    int **mat1, **mat2;
    int rows,cols,i,j;
    printf("How many rows : ");
    scanf("%d",&rows);
    printf("How many cols : ");
    scanf("%d",&cols);
    
    mat1 = create_mat(rows,cols);
    mat2 = create_mat(rows,cols);

    if(mat1 == NULL || mat2 ==NULL){
        puts("Memory failed.....");
        return 0;
    }
    input(mat1 ,rows, cols);
    output(mat1 ,rows, cols);
    destroy_mat(mat1,rows);
    printf("Finished..........");
}

int ** create_mat(int rows, int cols){
    int **mat,i;
    //array of int pointers..........
    mat = (int *)malloc(sizeof(int) * rows);
    if(mat == NULL) return NULL;
    for(i=0; i<rows; i++){
        // mat[i]  i[mat]
        *(mat+i) =  (int *)malloc(sizeof(int) * cols); 
        if(*(mat+i) == NULL) return NULL;
    }
    return mat;
}

void destroy_mat(int **mat, int rows){
    int i;
    for(i=0; i<rows; i++){
        free(*(mat+i)) ;
    }
    free(mat);
}

void input(int **a ,int rows, int cols){    
    int i,j;
    printf("Enter matrix item : ");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d",*(a+i)+j);   // &a[i][j]
        }
    }
}

void output(int **a ,int rows, int cols){    
    int i,j;
    printf("Matrix item : \n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ",((a+i)+j));   // a[i][j]
        }
        printf("\n");
    }
}