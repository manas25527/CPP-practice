#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, max = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
            sum = sum-a+b;
            if(sum>max)
                max = sum;
    }
    cout << max;
    return 0;
}