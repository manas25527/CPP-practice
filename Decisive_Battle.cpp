#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int E = 0, W = 0;
  for(char c : s)
  {
    if(c=='E') 
      E++;
    else if(c=='W')
      W++;
  }
  E>W?cout<<"East":cout<<"West";
  return 0;
}