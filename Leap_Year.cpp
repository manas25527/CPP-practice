#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int days;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << 366;
    }
    else
        cout << 365;
    return 0;
}