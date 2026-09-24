#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long long bill, peter;
        cin >> bill >> peter;
        long long tax[7];
        for (int j = 0; j < 7; j++)
        {
            cin >> tax[j];
        }

        for (int j = 0; j < 7; j++)
        {
            bill = (((bill*tax[j])/100) + bill);
        }
        if(bill<=peter) cout << "Successful\n";
        else cout << "Dishes\n";
    }
    return 0;
}