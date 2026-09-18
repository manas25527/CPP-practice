#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int tar)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == tar) return mid;
        else if(arr[mid] < tar) low = mid+1;
        else if(arr[mid] > tar) high = mid-1;
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tar;
    cin >> tar;
    return 0;
}