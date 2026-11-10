#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==1) k++;
    }
    if(k!=0 && k!=n) {
        int current_count1 = 0;
        int cand1_swap, cand1_ind, cand2_swap, cand2_ind;
        for (int i = 0; i < k; i++)
        {
            if(v[i]==1) current_count1++;
        }
        int max_count = current_count1, max_ind = 0;
        if(max_count!=k) {
            for (int i = 0; i < n-k; i++)
            {
                if(v[i]==1) current_count1--;
                if(v[i+k]==1) current_count1++;
                if(current_count1 > max_count) {
                    max_count = current_count1;
                    max_ind = i+1;
                }
            }
            cand1_ind = max_ind;
        }
        else cand1_ind = 0;
        cand1_swap = k-max_count;

        if(k>=2) {
            int current_count2 = 0;
            k=n-k;
            for (int i = 1; i <= k; i++)
            {
                if(v[i]==0) current_count2++;
            }
            int min_count = current_count2, min_ind = k+1;
            if(min_count!=k) {
                for (int i = 1; i <= n-k-1; i++)
                {
                    if(v[i]==0) current_count2--;
                    if(v[i+k]==0) current_count2++;
                    if(current_count2 > min_count) {
                        min_count = current_count2;
                        min_ind = i+k+1;
                    }
                }
                cand2_ind = min_ind;
            }
            else cand2_ind = k+1;
            cand2_swap = k-min_count;
        }
        if(cand2_swap>=cand1_swap) {
            cout << cand1_ind << '\n' << cand1_swap;
        }
        else if(cand2_swap<cand1_swap) {
            cout << cand2_ind << '\n' << cand2_swap;
        }
    }
    else cout << 0 << '\n' << 0;
    return 0;
}