#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        long long root = round(sqrt(x));
        if (root*root == x && isPrime(root)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}