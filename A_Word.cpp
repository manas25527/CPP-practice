#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for(char c: s)
    {
        if((int)c>=65 && (int)c<=90)
            upper++;
        else
            lower++;
    }

    if(upper>lower)
    {    
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    return 0;
}