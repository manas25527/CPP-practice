#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int co = 0;
    while(n>0)
    {
        if(n%10==4 || n%10==7)
            co++;   
        n /= 10;
    }
    co==4||co==7?cout<<"YES":cout<<"NO";
    return 0;
}