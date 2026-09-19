#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int roundOfCount = 0, temp = a;
        while(temp!=0)
        {
            int dig = temp%10;
            if(dig!=0) roundOfCount++;
            temp /= 10;
        }
        cout << roundOfCount << '\n';
        int j = 0;
        while(a!=0)
        {
            int digit = a%10;
            if(digit!=0) cout << (int)(digit*pow(10,j)) << " ";
            j++;
            a /= 10;
        }
        cout << '\n';
    }
    
    return 0;
}