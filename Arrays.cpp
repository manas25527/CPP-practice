#include <iostream>

using namespace std;

const int MAX_ELEMENTS = 200005;
int arr[MAX_ELEMENTS];
int head[MAX_ELEMENTS];

int main()
{
    int n;
    cin >> n;
    
    int current_idx = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        int L;
        cin >> L;
        
        head[i] = current_idx;
        
        for (int j = 0; j < L; ++j)
        {
            cin >> arr[current_idx];
            current_idx++;
        }
    }
    
    int x, y;
    cin >> x >> y;
    
    cout << arr[head[x] + (y-1)] << "\n";
    
    return 0;
}