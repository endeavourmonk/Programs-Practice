#include <iostream>
using namespace std;

int sum(int *arr, int s, int n) {
    if (n == 0)
        return s;
    cout << "n = " << n << ", s = " << s << endl;
    s = sum( ( arr + 1 ), s + ( *arr ), n - 1);
    return s;
}

int main() {
    int arr[] = { 1, 2, 3 };
    int n = sizeof( arr ) / sizeof( int );
    int ans = sum( arr, 0, n );
    cout << "Sum = " << ans;
    return 0;
}