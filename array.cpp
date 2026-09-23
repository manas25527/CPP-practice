#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[8];
    for(int i = 0; i < 8; i++) {
        cin >> marks[i];
    }
    for(int i = 0; i < 4; i++) {
        int temp = marks[i];
        marks[i] = marks[7-i];
        marks[7-i] = temp;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << marks[i] << ' ';
    }
    
    return 0;
}