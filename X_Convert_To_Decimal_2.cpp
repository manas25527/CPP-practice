#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        int ones = 0;
        while(a!=0) {
            if(a%2==1) ones++;
            a /= 2;
        }
        cout << (2<<(ones-1)) - 1 << '\n';
    }
    return 0;
}