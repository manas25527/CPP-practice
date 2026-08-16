#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pos, dan;
    cin >> pos;
    int count = 1;
    for (int i = 0; i < pos.length()-1; i++)
    {
        if(pos[i] == pos[i+1])
            count++;
        else
            count = 1;
        
        if(count == 7)
        {
            dan = "YES";
            break;
        }
        else
            dan = "NO";
    }
    cout << dan;
    return 0;
}