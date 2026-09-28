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
        int k = 0, sum1 = 0, sum2 = 0;
        while(a>0) {
            int l = a%10;
            if(k%2==0) sum1 += l;
            else sum2 += l;
            k++;
            a /= 10;
        }
        if(sum1==sum2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}