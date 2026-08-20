#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, d;
    cin >> n >> d;
    
    double a, b, x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(sqrt(a*a+b*b)<=d)
            x++;
    }
    cout << x;
    return 0;
}