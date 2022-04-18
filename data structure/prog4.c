#include<stdio.h>
#include<stdlib.h>
void input(int **ptr , int rows , int cols);
int ** create_mat(int rows , int cols);
void destroy_mat(int **mat , int rows);
void print(int** , int , int);
int main(){
    int rows,cols,i,j;
    int **mat1 , **mat2;
    printf("How many rows :");
    scanf("%d",&rows);
    printf("How many cols :");
    scanf("%d",&cols);

    create_mat(rows,cols);
    create_mat(rows,cols);
    if(mat1 == NULL || mat2 == NULL){
        printf("creation failed");
        return 0;
    }
    input(mat1,rows,cols);
    print(mat1,rows,cols);


    return 0;
}
int ** create_mat(int rows , int cols){
    int **mat,i;
    //array of integer pointers.
    mat = (int **)malloc(sizeof(int*) * rows); 
    if(mat = NULL)
        return NULL;
    for(i=0 ; i<rows ; i++){
        *(mat+i)= (int*)malloc(sizeof(int) * cols);
        if(*(mat+i) == NULL)
            return NULL;
    }
    return mat;
}
void input(int **ptr , int rows , int cols){
    int i,j;
    printf("Enter matrix items:\n");
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<cols ; j++){
            scanf("%d",*(ptr+i)+j);
        }
    }
}

void print(int **ptr , int rows , int cols){
    int i,j;
    printf("matrix :\n");
    for(i=0 ;i<rows ; i++){
        for(j=0 ; j<cols ; j++){
            printf("%d ",*(*(ptr+i)+j)); //a[i][j]
        }
        printf("\n");
    }
}

void destroy_mat(int **mat , int rows){
    int i;
    for(i=0 ; i<rows ; i++){
        free(*(mat+i));
    }    
    free(mat);
}