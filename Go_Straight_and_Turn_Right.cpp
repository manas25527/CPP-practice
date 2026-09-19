#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char mov[n];
    for(char &c: mov) cin >> c;
    int x = 0, y = 0;
    string face = "+x";
    for(char c: mov)
    {
        if(c=='S')
        {
            if(face=="+x") x++;
            else if(face=="-y") y--;
            else if(face=="-x") x--;
            else if(face=="+y") y++;
        }
        else if(c=='R')
        {
            if(face=="+x") face ="-y";
            else if(face=="-y") face ="-x";
            else if(face=="-x") face ="+y";
            else if(face=="+y") face ="+x";
        }
    }

    cout << x << " " << y;
    return 0;
}