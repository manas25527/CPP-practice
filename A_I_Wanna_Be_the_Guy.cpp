#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicatesPreserveOrder(const vector<int>& arr)
{
    unordered_set<int> seen;
    vector<int> result;
    
    for (int num : arr)
    {
        if (seen.insert(num).second) 
        { 
            result.push_back(num);
        }
    }
    
    return result;
}

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
    }

    int q;
    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
    }
    
    vector <int> pass(p+q);
    for (int i = 0; i < p; i++)
    {
        pass[i] = x[i];
    }
    for (int i = 0; i < q; i++)
    {
        pass[i+p] = y[i];
    }
    
    vector<int> uniqueArr = removeDuplicatesPreserveOrder(pass);
    int sum = 0;
    for (int num : uniqueArr)
        sum += num;
    
    sum<((n*(n+1))/2)?cout<<"Oh, my keyboard!":cout<<"I become the guy.";
    return 0;
}