#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==1) {
            for (int j = 0; j < (i+1)/2; j++)
            {
                cout << '*';
                if(j!=(i-1)/2) cout << ' ';
            }
            cout << '\n';
        }
        else if(i%2==0) {
            for (int j = 0; j < i; j++)
            {
                if(j%2==0) cout << ' ';
                else if(j%2==1) cout << '*';
            }
            cout << '\n';
        }
    }
    for (int i = n-1; i >= 1; i--)
    {
        if(i%2==1) {
            for (int j = 0; j < (i+1)/2; j++)
            {
                cout << '*';
                if(j!=(i-1)/2) cout << ' ';
            }
            cout << '\n';
        }
        else if(i%2==0) {
            for (int j = 0; j < i; j++)
            {
                if(j%2==0) cout << ' ';
                else if(j%2==1) cout << '*';
            }
            cout << '\n';
        }
    }
    return 0;
}