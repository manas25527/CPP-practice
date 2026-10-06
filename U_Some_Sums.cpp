#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n) {
    int sum = 0;
    while(n!=0) {
        int digit = n%10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int strt = min(a,b);
    int end = max(a,b);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(digit_sum(i)<=end && digit_sum(i)>=strt) sum += i;
    }
    cout << sum;
    return 0;
}