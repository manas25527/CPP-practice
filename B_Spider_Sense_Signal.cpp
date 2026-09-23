#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long sum = 0;
    long a, b;
    for(long i = 0; i < n; i++) {
        cin >> a >> b;
        sum += (a^b);
    }
    cout << sum;
    return 0;
}