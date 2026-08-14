#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        int a,b,c;
        cin >> a >> b >> c;
        
        if ((a==b && b==1) || (a==c && c==1) || (c==b && b==1))
            x++;
    }
    
    cout << x << '\n';
    return 0;
}