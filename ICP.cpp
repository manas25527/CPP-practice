#include <iostream>
#include <vector>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin >> n;
    int arr[n];
    int sumEven = 0, sumOdd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i]%2!=0) sumOdd += arr[i];
        else sumEven += arr[i];
    }
    cout << sumEven << ' ' << sumOdd;
    return 0;
}