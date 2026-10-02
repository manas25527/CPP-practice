#include <bits/stdc++.h>
using namespace std;

void array_rev_ab(vector<int> &arr, int a, int b) {
    for (int i = 0; i < (b-a+1)/2; i++)
    {
        int temp = arr[a+i];
        arr[a+i] = arr[b-i];
        arr[b-i] = temp;
    }
}

void array_rev(vector<int> &arr) {
    for (int i = 0; i < (arr.size())/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = temp;
    }
}

void array_right_rotation(vector<int> &arr) {
    int last = arr[arr.size()-1];
    for (int i = arr.size()-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

void array_right_rotation_by_k(vector<int> &arr, int k) {
    k = k%arr.size();
    for (int j = 0; j < k; j++)
    {
        int last = arr[arr.size()-1];
        for (int i = arr.size()-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = last;
    }
}

void array_right_rotation_by_k2(vector<int> &arr, int k) {
    k = k%arr.size();
    array_rev(arr);
    array_rev_ab(arr, 0, k-1);
    array_rev_ab(arr, k, arr.size()-1);
}

int main()
{
    int n; 
    // int a, b;
    int k;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cin >> a >> b;
    cin >> k;
    // array_rev(arr, a, b);
    // array_right_rotation(arr);
    // array_right_rotation_by_k(arr, k);
    array_right_rotation_by_k2(arr, k);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}