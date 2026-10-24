#include <bits/stdc++.h>
using namespace std;

void series(int a) {
    for (int i = 1; i <= a; i++)
    {
        cout << i;
        if(i!=a) cout << ' ';
    }
    
}

int main()
{
    int n;
    cin >> n;
    series(n);
    return 0;
}