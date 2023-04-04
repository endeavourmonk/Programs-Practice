#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];   // pointer to store address of array of pointers
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }

    // allocating space
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cout << arr[i][j] << " ";
    
    // deallocating space
    for(int i = 0; i < n; ++i)
        delete arr[i];
    delete arr;
    return 0;
}