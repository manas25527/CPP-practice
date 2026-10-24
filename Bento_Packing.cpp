#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> del(n);
    vector<int> vol(n);
    for(int i = 0; i < n; i++)
    {
        cin >> del[i] >> vol[i];
    }
    long long int delTotal = 0, volTotal = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     auto delMax = max_element(del.begin(), del.end());
    //     int ind = delMax-del.begin();
    //     if (volTotal+vol[ind] <= w) {
    //         delTotal += *delMax;
    //         volTotal += vol[ind];
    //     }
    //     del[ind] = -1;
    //     vol[ind] = -1;
    //     if(volTotal==w) break;
    // }
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    
    cout << delTotal;
    return 0;
}