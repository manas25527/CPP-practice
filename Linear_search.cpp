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
    int tar, ind = 0;
    cin >> tar;
    for (int i = 0; i < n; i++)
    {
        if(tar==arr[i])
        {
            ind = i;
            break;
        }
    }
    cout << ind;
    return 0;
}