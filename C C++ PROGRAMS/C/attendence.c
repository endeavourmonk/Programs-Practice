#include<stdio.h>
void get_attendence(int *,int );
int remove_duplicate(int *,int *, int);
void show(int *,int);
void arrange_in_ascending(int * ,int);
// Driver Code
int main(){
    int inp_atd[100],atd[100],ar_atd[100];
    int i,no,N;
    printf("Enter number of roll numbers to be entered :");
    scanf("%d",&N);
    printf("Enter roll numbers :-\n");
    get_attendence(inp_atd , N);
    no=remove_duplicate(inp_atd , atd, N);
    printf("Roll Numbers after removing multiple occuring roll numbers :\n");
    show(atd,no);
    arrange_in_ascending(atd ,no);
    printf("\n\nRoll Numbers in arranged manner : \n");
    show(atd,no);
    printf("\n%d students are present in class and %d roll numbers are duplicate.",no,N-no);
    return 0;
}
//accepting roll numbers of N students
void get_attendence(int * att ,int n){
    for(int i=0 ;i<n ;i++)
        scanf("%d",&att[i]);
}
//printing elements of array
void show(int *arr,int n){
    for(int j=0 ;j<n ;j++)
        printf("| %d |\n",*(arr+j));
}
//removing duplicate elements from array.
int remove_duplicate(int * atd , int *unq_atd,int n){
    int i=0,j,k=0;
    for(i=0; i<n ; i++){
        for(j=i-1 ; j>=0 ; j--)
            if(*(atd+j)==*(atd+i))
                goto down;
        *(unq_atd+k++)=*(atd+i);
        down: ;
    }
    return k;
}
// Arranging roll numbers in ascending order
void arrange_in_ascending(int *at , int N){
    int i=0,j,temp;
    for(i=0 ; i<N-1 ;i++)
        for(j=i+1 ; j<N ;j++)
            if(*(at+i)>*(at+j)){
                //swapping elements
                temp=*(at+j);
                *(at+j)=*(at+i);
                *(at+i)=temp;
                i=-1;
                break;
            }
}