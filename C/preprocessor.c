/*
Four process of C program to become executable.

    Preprocessing   ->  Compilation     ->      Assembly    ->      Linking
        |                      |                    |                   |
        V                      V                    V                   V
    * Remoaval of       * Assembly level        * .O, .exe           * Links the function 
      Comments.           instructions          * functions are        implemetations.
    * Expansion of        are generated.          not resolved
      macros.                                     yet.
    * Expansion of                              * Assembly level
      include files.                              instructions are
                                                  converted into 
                                                  machine code.
*/                                                  
#include<stdio.h>
#define pi 3.14     // preprocessor variable
#define square(x) x*x
int main(){
    int a = 5;
    printf("Area of circle = %f\n",pi * square(a));
    printf("Area of square = %d\n",square(a));
    // Predefined macros in C.
    printf("The file name is %s\n",__FILE__);
    printf("date is %s\n",__DATE__);
    printf("Time is %s\n",__TIME__);
    printf("Line number is %d\n",__LINE__);
    printf("ANSI standard %d",__STDC__);
    return 0;
}