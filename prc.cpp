#include <bits/stdc++.h>
using namespace std;

bool check_vowel(char c) {
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return true;
    return false;
}

int vowel_count(string s) {
    int count = 0;
    for(int i = 0; i < s.length() ; i++) {
        if(check_vowel(s[i])) count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string max_string;
    int max_vowel = INT_MIN;
    for(int i=0;i<n;i++) {
        int count_v = vowel_count(arr[i]);
        if(max_vowel < count_v) {
            max_string = arr[i];
            max_vowel = count_v;
        }
    }
    cout << max_string << ' ' << max_vowel << '\n';
    return 0;
}