#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int a, b;
        cin >> a >> b;
        if(b%2!=0) {
            long long int rev = 0;
            while(a!=0) {
                int digit = (int)(a%10);
                rev = (rev*10)+digit;
                a /= 10;
            }
            cout << rev << '\n';
        }
        else {
            while(a%10==0) a/=10;
            cout << a << '\n';
        }
    }
    
    return 0;
}