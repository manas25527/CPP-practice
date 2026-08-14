#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n, tar;
    cin >> n >> tar;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] >= arr[tar-1]) && arr[i] > 0)
        {
            x++;
        }
    }
    
    cout << x << '\n';
    return 0;
}