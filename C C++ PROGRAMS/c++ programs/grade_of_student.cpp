#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here
class Student{
    int scores[5];
    public:
        void input(){
            for (int i=0;i<5;i++)
                cin>>scores[i];
        }
        int calculateTotalScore(){
            int sum;
            for (int i=0;i<5;i++)
                sum+=scores[i];
            return sum;
        }
};
int main() {
    int n; // number of students
    cout<<"Enter number of students : ";
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    for(int i = 0; i <n; i++){
        cout <<"enter marks : \n";
        s[i].input();
    }
    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
            count++;
    }
    // print result
    cout <<"only "<< count<<"student scores higher than Kristen.";
    return 0;
}
