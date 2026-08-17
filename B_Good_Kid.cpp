#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        int m_in = 0;
        for (int k = 0; k < size; k++)
        {
            if(arr[m_in]>arr[k])
                m_in = k;
        }
        arr[m_in]++;
        int maxprd = 1;
        for (int l = 0; l < size; l++)
        {
            maxprd *= arr[l];
        }
        cout << maxprd << '\n';
    }
    
    return 0;
}