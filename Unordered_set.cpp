#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <int> us;
    us.insert(5);
    us.insert(2);
    us.insert(8);
    us.insert(2);
    if(us.find(5) != us.end()) cout << "5 is present" << '\n';
    us.erase(2);
    for(int x: us) cout << x << "\n";
    return 0;
}