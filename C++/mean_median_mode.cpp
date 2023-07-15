#include<iostream>
#define arr_Size 50

class digit{

    int value;
};
//CLASS DATA 
class data {
    private:
        digit arr[arr_Size];        //ARRAY OF DIGITS 
        int index;                  //VARIABLE FOR INDEXING PURPOSE
    public:
        data(){}                    //CONSTRUCTOR
        ~data(){}                   //DESTRUCTOR
        void enter_elements();      //FOR INPUTTING ELEMENTS IN ARRAY
        void print_elements();      //FOR SHOWING ELEMENTS OF ARRAY
        float mean_calculator();    //FOR CALCULATING MEAN OF ALL NUMBERS STORED IN ARRAY
        float median_calculator();  //FOR CALCULATING MEDIAN OF ALL NUMBERS STORED IN ARRAY
        
};

void data :: enter_elements(){

}

//DRIVER CODE
int main(){
    printf("qwerty\b\a");
    return 0;
}





/*
Mean:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
Mean is the sum of all the values in the data set divided by the number of values in the data set.
It is also called the Arithmetic Average. If x1, x2, x3,……, xn are the values of a data set then the
mean is denoted as x̅ (x bar) and the formula is calculated as:
x̅ =  (x1 + x2 + x3 + …… + xn) / n
Example:
The mean of the data 10, 30, 40, 20, 50 is
Mean = (sum of all data values) / (number of values)
Mean = (10 + 30 + 40 + 20+ 50) / 5=30

Median::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
A Median is a middle value for a sorted data.
The sorting of the data can be done either in ascending order or in descending order.
A median divides the data into two halves. The formula for median:
If the number of values (n value) in the data set is odd then the formula to calculate median is:
Median = ((n + 1)/2)th term
If the number of values (n value) in the data set is even then the formula to calculate median is:
Median  = [(n/2)th term + {(n/2) + 1}th term] / 2
Example 1:
The median of the data 30, 40, 10, 20, 50 is:
Step 1: Order the given data in ascending order as:
10, 20, 30, 40, 50
Step 2: Check n (number of terms of data set) is even or odd and find the median of
the data with respective ‘n’ value.
Step 3: Here, n = 5 (odd) then Median = [(n + 1)/2]th term 10, 20, 30, 40, 50
The median of the data is [(5 + 1)/2]th term is 30.

Example 2:
25, 12, 5, 24, 15, 22, 23, 25
Step 1: Order the given data in ascending order as: 
5, 12, 15, 22, 23, 24, 25, 25 
Step 2: Check n (number of terms of data set) is even or odd and find the median of the data with 
respective ‘n’ value.
Step 3: Here, n = 8 (even) then,
Median = [(n/2)th term + {(n/2) + 1)th term] / 2
Median = [(8/2)th term + {(8/2) + 1}th term] / 2 = (22+23) / 2 = 22.5

Mode:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
A mode is the most frequent value or item of the data set. A data set can generally have one or more than
one mode value. If the data set has one mode then it is called “Uni-modal”. Similarly, If the data set 
contains 2 modes then it is called “Bimodal” and if the data set contains 3 modes then it is known as 
“Trimodal”. If the data set consists of more than one mode then it is known as “multi-modal”
(can be bimodal or trimodal). There is no mode for a data set if every number appears only once.

Example 1:
If the data set is {1, 2, 2, 3, 3, 4, 5} then it has 2 modes i.e, 2 and 3 (bi-modal).
 Since, both the values 2 and 3 are repeating twice in the data set.
Example 2:
If the data set is {15, 42, 65, 65, 95} then the mode is 65 (uni-modal).
Since 65 is the only repeating value in the data set.

Range:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
It is the difference between the highest value and the lowest value. It is a way to understand how the numbers are spread in a data set. Formula to find Range is:
Range = Highest value – Lowest Value
Example:
If the data set is {12, 19, 6, 2, 15, 4} then the lowest value is 2 and the highest value is 19.
So the range is 19 − 2 = 17.
*/