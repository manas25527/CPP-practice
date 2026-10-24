#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long int a;
        cin >> a;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            int digit = a%10;
            if(i<=2) sum1 += digit;
            else sum2 += digit;
            a/=10;
        }
        sum1==sum2?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}