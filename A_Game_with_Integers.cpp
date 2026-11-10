#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ((a+1)%3==0 || (a-1)%3==0)? cout << "First\n" : cout << "Second\n";
    }
    return 0;
}