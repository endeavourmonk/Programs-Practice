#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> b(5);
    for(auto &x : b)  cin >> x;
    for(auto j : b) cout << j << " ";
    return 0;
}