#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long int x, y, z;
        cin >> x >> y >> z;
        if(x>0 && y>0 && z>0) cout << 1 << '\n';
        else if(x<0 && y>0 && z>0) cout << 2 << '\n';
        else if(x<0 && y<0 && z>0) cout << 3 << '\n';
        else if(x>0 && y<0 && z>0) cout << 4 << '\n';
        else if(x>0 && y>0 && z<0) cout << 5 << '\n';
        else if(x<0 && y>0 && z<0) cout << 6 << '\n';
        else if(x<0 && y<0 && z<0) cout << 7 << '\n';
        else if(x>0 && y<0 && z<0) cout << 8 << '\n';
    }
    
    return 0;
}