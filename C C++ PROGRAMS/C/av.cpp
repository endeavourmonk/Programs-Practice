// #include<stdio.h>
// #include<time.h> //needs to be included to use time()
// int main(){
//    int arr[20],i=0;
//    time_t time1;
//    time_t time3;
//    long int f=0;
//    time(&time1);
//    while(f<=6){ //'6' is the number of seconds the program will ask for input for
//       scanf("%d",&arr[i++]);
//       time(&time3);
//       f=time3-time1;
//    }
//    printf("Time's up!");
//    for(int j=0;j<i;j++)
//     printf("%d \n",arr[j]);
//     return 0;
// }#include<iostream>
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream f("aaaatest.txt");
    if(f.is_open())
    {
        std::cout << f.rdbuf();
    }
    else{
        cout<<"ERROR:no file opened.";
    }
}