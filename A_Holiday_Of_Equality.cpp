#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> vec(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int maxVal = *max_element(vec.begin(), vec.end());
    int TS = 0;
    for (int i = 0; i < n; i++)
    {
        TS += (maxVal-vec[i]);
    }
    
    cout << TS;
    return 0;
}