#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[5][5];
    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> s[i][j];
        }
    }
    vector<int> count;
    for (int i = 0; i < 5; i++)
    {
        int freq1 = 0, freq2 = 0;
        for (int j = 0; j < 5; j++)
        {
            if(s[i][j]=='.') freq1++;
            if(s[j][i]=='.') freq2++;
        }
        count.push_back(freq1);
        count.push_back(freq2);
    }
    int freq3 = 0, freq4 = 0;
    for (int i = 0; i < 5; i++)
    {
        if(s[i][i]=='.') freq3++;
        if(s[i][4-i]=='.') freq4++;
    }
    count.push_back(freq3);
    count.push_back(freq4);
    cout << *min_element(count.begin(), count.end());
    return 0;
}