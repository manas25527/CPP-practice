#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int h,w,d,t,s,c;
        bool saving = false;
        cin >> h >> w >> d >> t >> s >> c;
        if(h>=20 && w>=10 && t>=5) {
            saving = true;
            if(d >= 500) {
                if(w >= 50) saving = true;
                else saving = false;
            }
            if(s==0) {
                if(h >= 50) saving = true;
                else saving = false;
            }
            if(c>10) {
                if(c>30) {
                    if(s==1) saving = true;
                    else saving = false;
                }
                else if (t>=15) saving = true;
                else saving = false;
            }
        }
        if (saving) cout << "Spider-Man saved the day\n";
        else cout << "Failed\n";
    }
    
    return 0;
}