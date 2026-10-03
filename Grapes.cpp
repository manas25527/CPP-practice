#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> person(n,0);
    int grp;
    if(n>m || n==m) {
        grp = 1;
        for (int i = 0; i < m; i++)
        {
            person[i] = grp;
        }
    }
    else if(n<m) {
        grp = m/n;
        for (int i = 0; i < n; i++) {
            person[i] = grp;
        }
        if(m%n!=0) {
            int extra_grp = m%n;
            for (int i = 0; i < extra_grp; i++)
            {
                person[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << person[i] << '\n';
    }
    return 0;
}