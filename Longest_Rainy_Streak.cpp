#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    cin >> days;
    vector<char> weather(days);
    for(int i = 0; i < days; i++)
    {
        cin >> weather[i];
    }
    int count = 0;
    int max = 0;
    for (int i = 0; i < days; i++)
    {
        if(weather[i]=='R') count++;
        else if(weather[i]=='S') count = 0;
        if(count>max) max = count;
    }
    cout << max;
    return 0;
}