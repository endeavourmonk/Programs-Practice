#include<stdio.h>
#define size  100
#define SIZE  100
typedef struct
{
	int mat[size][SIZE];
	int row,col;
}Matrix;
Matrix enter_elements(int,int);
void print_matrix(Matrix m);
Matrix  sum(Matrix s1,Matrix s2);

int main ()
{
	Matrix A,B,C;
	printf("enter number of rows you want to construct in Ist matrix ");
	scanf("%d",&A.row);
	printf("enter number of columns you want to construct in Ist matrix ");
	scanf("%d",&A.col);
	printf("enter elements in matrix I ");
	A=enter_elements(A.row,A.col);
	printf("enter number of rows you want to construct in IInd matrix ");
	scanf("%d",&B.row);	printf("enter number of columns you want to construct in IInd matrix  ");
	scanf("%d",&B.col);
	printf("enter elements in matrix II ");
	B= enter_elements(B.row,B.col);
	printf("MATRIX I is\n\n");
	print_matrix(A);
	printf("\nMATRIX II is\n\n");
	print_matrix(B);
	C=sum(A,B);
	printf("\n\nSUM OF BOTH MATRICES IS\n\n");
	print_matrix(C);
	return 0;


}

////////////  inputting elements in matrix  //////////

Matrix enter_elements(int r, int c)
{
	Matrix M;
	for(M.row=0;M.row<r;M.row++)
	{
		for(M.col=0;M.col<c;M.col++)
		{		scanf("%d",&M.mat[M.row][M.col]);
		}
	}
	return M;
 }

 ///////////  printing elements of matrix  ////////////

void print_matrix(Matrix m)
 {
 	int i,j;
 	for(i=0;i<m.row;i++)
 	{
 		for(j=0;j<m.col;j++)
 		{
 			printf("%d\t",m.mat[i][j]);

		 }
		 printf("\n\n");
	}
}

 //////////////////  adding matrices   //////////////////

 Matrix  sum(Matrix s1,Matrix s2)
 {
     Matrix S;
     int i,j;
     if(s1.row==s2.row && s1.col==s2.col)
     {
         for(i=0;i<s1.row;i++)
         {
             for(j=0;j<s1.col;j++)
             {
                 S.mat[i][j]=s1.mat[i][j]+s2.mat[i][j];
             }
         }
         S.row=i;
         S.col=j;
         return S;
     }
     printf("rows and columns are not same in both matrices that's addition is not possible");
 }