#include <iostream>
using namespace std;
int time_calculator(int, int *, int);
int main()
{
    int N, RN, i;
    cin >> N;
    cin >> RN;
    int arr[N];
    for (i = 0; i < N; i++)
        cin >> arr[i];
    int time = time_calculator(N, arr, RN);
    cout << "time required= " << time << " sec";
    return 0;
}

int time_calculator(int n, int *s, int rn)
{
    int sm = *s;
    for (int i = 0; i < n; i++)
        if (sm > *(s + i))
        {
            int t = sm;
            sm = *(s + i);
            *(s + i) = t;
        }
    return rn - sm;
}
