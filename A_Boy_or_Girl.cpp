#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    int distinct = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            distinct++;
    }

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}