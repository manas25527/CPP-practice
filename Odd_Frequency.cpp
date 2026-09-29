#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int freq = 0, ind;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]) freq++;
        }
        if(freq%2!=0) {
            ind = i;
            break;
        }
    }
    cout << arr[ind];
    return 0;
}