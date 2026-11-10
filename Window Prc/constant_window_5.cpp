#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> cardPoints(n);
    for(int i = 0; i < n; i++)
    {
        cin >> cardPoints[i];
    }
    long int total_sum = accumulate(cardPoints.begin(), cardPoints.end(), 0L);
    if(k!=n) {
        k = n-k;
        long int current_sum = accumulate(cardPoints.begin(), cardPoints.begin()+k, 0L);
        long int min_sum = current_sum;
        int min_ind = 0;
        for (int i = 0; i < n-k; i++)
        {
            current_sum = current_sum - cardPoints[i] + cardPoints[i+k];
            if(current_sum < min_sum) {
                min_sum = current_sum;
                min_ind = i+1;
            }
        }
        cout << min_ind << '\n' << total_sum-min_sum;
    }
    else cout << 0 << '\n' << total_sum;
    return 0;
}