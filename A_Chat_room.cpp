#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int counter = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='h' && counter==0) counter++;
        else if(s[i]=='e' && counter==1) counter++;
        else if(s[i]=='l' && counter==2) counter++;
        else if(s[i]=='l' && counter==3) counter++;
        else if(s[i]=='o' && counter==4) {
            counter++;
            break;
        }
    }
    (counter==5)?cout << "YES": cout << "NO";
    return 0;
}