#include <bits/stdc++.h>
using namespace std;

bool Vowel(char c) {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int current_count = 0;
    for (int i = 0; i < k; i++)
    {
        if(Vowel(s[i])) current_count++;
    }
    int max_count = current_count;
    int max_ind = 0;
    if(max_count==k) cout << max_ind << '\n' << k;
    else {
        for (int i = 0; i < n-k; i++)
        {
            if(Vowel(s[i])) current_count--;
            if(Vowel(s[i+k])) current_count++;
            if(current_count > max_count) {
                max_count = current_count;
                max_ind = i+1;
                if(max_count==k) break;
            }
        }
        cout << max_ind << '\n' << max_count;
    }
    return 0;
}