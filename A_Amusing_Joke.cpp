#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s12 = s1+s2;
    sort(s12.begin(), s12.end());
    sort(s3.begin(), s3.end());
    (s12==s3)?cout<<"YES":cout<<"NO";
    return 0;
}