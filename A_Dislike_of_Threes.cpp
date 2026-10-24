#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(1001, 0);
    int num = 1;
    for(int i = 1; i <= 1000; i++)
    {
        if(num%3==0 || num%10==3) {
            num++;
            i--;
            continue;
        }
        v[i] = num;
        num++;
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cout << v[a] << '\n';
    }
    
    return 0;
}