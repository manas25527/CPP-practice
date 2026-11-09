#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if(n%4!=0) {
            cout << "NO\n";
            continue;
        }
        else {
            vector<int> v;
            int evenSum = 0, oddSum = 0;
            for (int j = 2; j <= n; j+=2)
            {
                evenSum += j;
                v.push_back(j);
            }
            for (int j = 1; j < (2*(n/2))-1; j+=2)
            {
                oddSum += j;
                v.push_back(j);
            }
            for(int j = 3; j < (2*n)-1; j+=2) {
                if((oddSum+j)==evenSum) {
                    v.push_back(j);
                    break;
                }
            }
            cout << "YES\n";
            for (int j = 0; j < n; j++)
            {
                cout << v[j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}