#include<stdio.h>
#define arr_size 100
int  main(){
    int mat1[arr_size][arr_size],mat2[arr_size][arr_size];
    static int pro_mat[arr_size][arr_size];
    int a,b,m,n,i,j,sum=0,c;
    printf("enter order of matrix I : \n");
    scanf("%d%d",&a,&b);
    printf("enter elements in Matrix I\n");
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            scanf("%d",&mat1[i][j]);

    printf("MATRIX I is\n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("%d  ",mat1[i][j]);
            }
        printf("\n");
        }
            
    printf("enter order of Marrix II : \n");
    scanf("%d%d",&m,&n);
    printf("ENTER ELEMENTS IN IInd MATRIX : \n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat2[i][j]);

    printf("MATRIX II is\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d  ",mat2[i][j]);
            }
            printf("\n");
        }

        if(b==m){
            for(i=0;i<a;i++)
                for(j=0;j<b;j++){
                    for(c=0;c<b;c++)
                        sum+=mat1[i][c]*mat2[c][j];
                pro_mat[i][j]=sum;
                sum=0;
                }
        }
        else {
            printf("MULTIPLACATION NOT POSSIBLE");
            return 0;
        }

        printf("PRODUCT OF BOTH MATRICES IS\n");
        for(i=0;i<a;i++){
            for(j=0;j<n;j++){
                printf("%d ",pro_mat[i][j]);
            }
            printf("\n");
        }
    return 0; 
}
