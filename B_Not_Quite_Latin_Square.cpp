#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int row, col;
        vector<vector<char>> matrix(3, vector<char>(3));
        for(int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> matrix[j][k];
                if(matrix[j][k]=='?') {
                    row = j;
                    col = k;
                }
            }
        }
        bool a = false, b = false, c = false;
        for (int j = 0; j < 3; j++)
        {
            if(matrix[row][j] == 'A') a = true;
            else if(matrix[row][j] == 'B') b = true;
            else if(matrix[row][j] == 'C') c = true;
        }

        for (int j = 0; j < 3; j++)
        {
            if(!a) {
                cout << 'A';
                break;
            }
            else if(!b) {
                cout << 'B';
                break;
            }
            else if(!c) {
                cout << 'C';
                break;
            }
        }
        cout << '\n';
    }
    return 0;
}