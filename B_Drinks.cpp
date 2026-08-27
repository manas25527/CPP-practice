#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(12) << (accumulate(arr, arr+n, 0.0))/n;
    return 0;
}