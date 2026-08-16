// Number Pattern or Repeated Number Pattern
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "i";
        }
        cout << '\n';
    }
    
    return 0;
}
    */

// Right-Angled Triangle Star Pattern or Star Triangle Pattern
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    
    return 0;
}
    */

    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    cin >> s;
    cout << (char)(s+32) << '\n';
    return 0;
}
    */

// Right-Angled Alphabet Triangle Pattern or Repeated Character Triangle Pattern
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)('a'+i);
        }
        cout << '\n';
    }
    
    return 0;
}
    */

// Centered Number Triangle Pattern or Pyramid Number Pattern.
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n-1-i; k >= 0; k--)
        {
            cout << ' ';
        }

        for (int j = 1; j <= i; j++)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
    */

// Diamond Star Pattern or Half Diamond Star Pattern
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        if(i)cout << '\n';
    }
    
    return 0;
}
    */

// Diamond Star Pattern (also called a Centered Diamond Pattern)
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n-1-i; k >= 0; k--)
        {
            cout << ' ';
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        for (int k = n-1-i; k >= 0; k--)
        {
            cout << ' ';
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        if(i) cout << '\n';
    }
    return 0;
}
    */

// Half Diamond Star Pattern or Right-Aligned Half Diamond Pattern
    /*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n-1-i; j >= 0; j--)
        {
            cout << ' ';
        }
        
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
    */

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             cout << ' ';
//         }
//         for (int i = 0; i < count; i++)
//         {
//             /* code */
//         }
        
//     }
    
//     return 0;
// }