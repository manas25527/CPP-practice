#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int strt = min(a,b);
        int end = max(a,b);
        int sum = 0;
        for (int i = strt+1; i < end; i++)
        {
            if(i%2!=0) sum += i;
        }
        cout << sum << '\n';
    }
    return 0;
}