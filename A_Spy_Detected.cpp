#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int arr[m];
        for(int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        bool f2 = (arr[0]==arr[1]);
        int pos;
        if(f2) {
            for (int j = 2; j < m; j++)
            {
                if(arr[j] != arr[0]) {
                    pos = j+1;
                    break;
                }
            }
        }
        else {
            if(arr[0] != arr[2]) pos = 1;
            else pos = 2;
        }
        cout << pos << '\n';
    }
    return 0;
}