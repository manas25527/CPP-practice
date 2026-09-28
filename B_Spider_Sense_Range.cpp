#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int Cx, Cy, r;
    cin >> Cx >> Cy >> r;
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0;
    for(int i = 0; i < n; i++)
    {
        long long int Xi, Yi;
        cin >> Xi >> Yi;
        long long int condition = (Xi*Xi) - (2*Xi*Cx) + (Yi*Yi) - (2*Yi*Cy) + (Cx*Cx) + (Cy*Cy) - (r*r);
        if(condition > 0) count3++; 
        else if(condition == 0) count2++; 
        else if(condition < 0) count1++;
    }
    cout << count1 << ' ' << count2 << ' ' << count3;
    return 0;
}