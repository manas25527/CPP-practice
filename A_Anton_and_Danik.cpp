#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    char game[n];
    for (long long int i = 0; i < n; i++)
        cin >> game[i];
    
    long long int countA = 0, countD = 0;
    for (long long int i = 0; i < n; i++)
    {
        if(game[i] == 'A')
            countA++;
        else
            countD++;
    }
    
    if(countA>countD)
        cout << "Anton";
    else if(countA==countD)
        cout << "Friendship";
    else
        cout << "Danik";

    return 0;
}