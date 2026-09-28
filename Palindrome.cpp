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
    bool check = true;
    for (int i = 0; i < n/2; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = false;
            break;
        }
    }
    if(check) cout << "Palindrome\n";
    else cout << "Not a Palindrome\n";
    
    return 0;
}