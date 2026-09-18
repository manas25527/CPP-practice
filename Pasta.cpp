#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    long int arr1[a], arr2[b];
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    string diet = "Yes";
    for (int i = 0; i < b; i++)
    {
        int count = 0;
        for (int j = 0; j < a; j++)
        {
            if (arr1[j] == arr2[i])
            {
                arr1[j] = -1;
                count++;
                break;
            }
        }
        if(count==0)
        {
            diet = "No";
            break;
        }
    }
    cout << diet;
    return 0;
}