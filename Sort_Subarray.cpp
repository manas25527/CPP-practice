#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    bool check = false; 
    for (int i = 1; i <= (n-k)+1; i++)
    {
        int ind = i;
        sort(arr.begin()+ind, arr.begin()+((i+k)-1)+1);
        if(is_sorted(arr.begin()+1, arr.end())) {
            check = true;
            break;
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    return 0;
}