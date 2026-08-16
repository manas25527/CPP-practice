#include <bits/stdc++.h>
using namespace std;

int main()
{
  float a, b;
  cin >> a >> b;
  int x = 0;
  if(a+b==9) x=1;
  else if(a-b==9) x=1;
  else if(a*b==9) x=1;
  else if(a/b==9.0) x=1;
  if(x==1) cout << "Nine";
  else cout << "Nein";
  return 0;
}