#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int fh[n], width = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> fh[i];
        if(fh[i]>h)
            width += 2;
        else
            width += 1;
    }
    
    cout << width;
    return 0;
}