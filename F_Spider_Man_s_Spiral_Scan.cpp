#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n*n];
    int j = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[j] >> arr[j+1] >> arr[j+2];
        j+= n;
    }
    sort(arr, arr+(n*n));
    for(int i = 0; i < n*n; i++) 
    {
        cout << arr[i];
        if(i!=(n*n)-1) cout << ' ';
    }
    return 0;
}