// Sum of XOR functions -> CodeForces
    /*
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

long long int Xor(long long int arr[], long long int a, long long int b)
{
    long long int Xor = 0;

    if (a == b)
        Xor = arr[a];
    
    else
    {
        for (long long int i = a; i <= b; i++)
        {
            Xor = Xor ^ arr[i];
        }
    }

    return Xor;
}

int main()
{
    long long int n;
    cin >> n;

    long long int a[n];
    for (long long int i = 0; i < n; i++)
        cin >> a[i];
    
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        long long int k = 1;
        for (long long int j = i; j < n; j++)
        {
            sum = (sum + (k*Xor(a, i, j))%998244353)%998244353;
            k++;
        }
    }
    
    cout << sum << '\n';
    return 0;
}
    */

#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    
    return 0;
}