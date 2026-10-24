#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &v) {
    int count = 0;
    bool check = false;
    if(v.size()==1 && v[0]<=2) check = false;
    else if(v.size()==1 && v[0]>2) check = true;
    else {
        for (int j = 0; j < v.size(); j++)
        {
            if(v[j]>=2) count++;
            if(count==2) {
                check = true;
                break;
            }
            else if(v[j]>=3) {
                check = true;
                break;
            }
        }
    }
    return check;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for(int j = 0; j < a; j++)
        {
            cin >> v[j];
        }
        if(solve(v)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}