#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int pos = 0;
    string sub = "WUB";
    string rep = " ";
    while((pos = s.find(sub, pos)) != string::npos) {
        s.replace(pos, sub.length(), rep);
        pos += rep.length();
    }
    string result = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]!=' ' || (i>0 && s[i-1]!=' ')) result += s[i];
    }
    cout << result;
    return 0;
}