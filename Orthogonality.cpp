#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    int prd = 0;
    for (int i = 0; i < n; i++)
    {
        prd += a[i]*b[i];
    }
    
    if(!prd)
        cout << "Yes";
    else    
        cout << "No";
    return 0;
}