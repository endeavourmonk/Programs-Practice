#include<stdio.h>
#define size 100
   void inputting_matrix_elements(int *,int , int);
   void  print_matrix(int *,int,int);
   void transpose_matrix(int *,int*,int , int );
 int main()
{
    int a[size][size];
    int t[size][size];
    int i,j;
    printf("entr no of rows you want to construct");
    scanf("%d",&i);
    printf("enter number of columns you want to construct ");
    scanf("%d",&j);
    printf("input elements in matrix\n\n");
    inputting_matrix_elements(&a[0][0],i,j);
    printf("\n\nMATRIX YOU ENTERED IS ::::::::::::\n\n\n");
    print_matrix(&a[0][0],i,j);
    transpose_matrix(&a[0][0],&t[0][0],i,j);
    printf("TRANSPOSE MATRIX IS ::::::::::::::::::\n\n");
    print_matrix(&t[0][0],i,j);
    return 0;


}

/////////////////  inputting elements in matrix  ///////////////////

void inputting_matrix_elements(int *a,int m,int n)
{
    int x,y;
    for(x=0;x<m;x++)
    {
        for(y=0;y<n;y++)
        {
            scanf("%d",(a+y));
        }
        a+=n;
    }
}

///////////////   printing elements of matrix   ////////////////////

void print_matrix(int *a,int m,int n)
{
    int x,y;
    for(x=0;x<m;x++)
    {
        for(y=0;y<n;y++)
        {
            printf("%d",*(a+y));
            printf("\t");
        }
        printf("\n");
        a+=n;
    }
}


///////////////   transposing matrix  /////////////////

void transpose_matrix(int *mat,int *tra ,int p,int q)
{
	int x, y,g;
    for(x=0;x<p;x++)
    {
    	g=0;
        for(y=0;y<q;y++)
        {
            *(tra+y)= *(mat+g);
            g+=q;
        }
        mat+=1;
        tra+=q;
    }

}
