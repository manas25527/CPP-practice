#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int total_players, y, r;
        cin >> total_players;
        cin >> y >> r;
        int sus = r;
        total_players -= r;
        y /= 2;
        if(total_players>=y) sus += y;
        else sus += total_players;
        cout << sus << '\n';
    }
    return 0;
}