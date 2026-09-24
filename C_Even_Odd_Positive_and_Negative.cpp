#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even = 0, odd = 0, pos = 0, neg = 0; 
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a%2==0) even++;
        else odd++;
        if(a<0) neg++;
        else if(a>0) pos++;
    }

    cout << "Even: " << even;
    cout << "\nOdd: " << odd;
    cout << "\nPositive: " << pos;
    cout << "\nNegative: " << neg;
    
    return 0;
}