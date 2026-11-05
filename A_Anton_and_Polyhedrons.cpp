#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    int Tetrahedron = 4, Cube = 6, Octahedron = 8, Dodecahedron = 12, Icosahedron = 20;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == "Tetrahedron") sum += Tetrahedron;
        else if(v[i] == "Cube") sum += Cube;
        else if(v[i] == "Octahedron") sum += Octahedron;
        else if(v[i] == "Dodecahedron") sum += Dodecahedron;
        else if(v[i] == "Icosahedron") sum += Icosahedron;
    }
    cout << sum;
    return 0;
}