#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    vector <int> arr(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    long long int max = 0;
    for (int i = 1; i <= n-2; i++)
    {
        long long int sum = 0;
        for (int j = i+1; j <= n-1; j++)
        {
            if(i+j>=v) break;
            for (int k = j+1; k <= n; k++)
            {
                if(i+j+k<=v) {
                    sum = arr[i]+arr[j]+arr[k];
                if(sum>max) max = sum;
                }
            }
        }
    }
    cout << max;
    return 0;
}