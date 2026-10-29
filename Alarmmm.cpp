#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string bis;
        cin >> bis;
        int alarms = 0;
        int j = 0;
        while(j<n) {
            if(bis[j]=='1') {
                alarms++;
                j += k+1;
            }
            else j++;
        }
        cout << alarms << '\n';
    }
    return 0;
}