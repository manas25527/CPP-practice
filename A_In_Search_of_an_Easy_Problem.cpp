#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int arr[n];
    int hard = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
            hard = 1;
    }
    
    if(hard)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}