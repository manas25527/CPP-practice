#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0, temp = n;
    while(temp!=0) {
        int digit = temp % 10;
        rev = (rev*10) + digit;
        temp /= 10;
    }
    cout << rev;
    if(rev==n) cout << "\nYES";
    else cout << "\nNO";
    return 0;
}