#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        int s = ((l/2)+1)*2;
        if(l%2==0) s = l;
        int e = (r/2)*2;
        int x = s/2;
        int y = e/2;
        int ned = y-x+1;
        int mj = (r-l+1)-ned;
        if(ned>mj) cout << "Ned\n";
        else if(ned<mj) cout << "MJ\n";
        else if(ned==mj) cout << "Draw\n";
    }
    return 0;
}