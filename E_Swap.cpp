#include <bits/stdc++.h>
using namespace std;

void interchange(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n, m;
    cin >> n >> m;
    interchange(n, m);
    cout << n << ' ' << m;
    return 0;
}