#include <bits/stdc++.h>
using namespace std;

long long int power(int a, int b) {
    long long int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    return power;
}

int main()
{
    int x, n;
    cin >> x >> n;
    long long int sum = 0;
    for (int i = 2; i <= n; i+=2)
    {
        sum+=power(x, i);
    }
    cout << sum;
    return 0;
}