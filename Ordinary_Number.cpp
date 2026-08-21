#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int count = 0;
    for (int i = 1; i < n-1; i++)
    {
        int b[3] = {arr[i-1], arr[i], arr[i+1]};
        int temp = arr[i];
        sort(b, b+3);
        if(b[1] == temp)
            count++;
    }
    
    cout << count;
    return 0;
}