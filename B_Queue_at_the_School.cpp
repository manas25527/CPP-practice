#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string line;
    cin >> n >> t >> line;
    while(t--)
    {
        for (int i = 0; i < n-1; i++)
        {
            if(line[i] == 'B' && line[i+1] == 'G')
            {
                swap(line[i], line[i+1]);
                i++;
            }
        }
    }
    cout << line;
    return 0;
}