using namespace std;
#include <iostream>
#include<cstdio>
#include <math.h>

int main()
{
    int ini_h, ini_m, fin_h, fin_m;
    cin >> ini_h >> ini_m;
    getchar();
    cin >> fin_h >> fin_m;

    int min;
    min = (fin_h-ini_h)*60 + fin_m-ini_m;

    int ans=0;

    if(min<=120)
    {
        ans += (min/30)*30;
    }
    else if(120<min && min<240)
    {
        ans += 4*30;
        min -= 120;
        ans += (min/30)*30;
    }
    else
    {
        ans += 4*30 + 4*40;
        min -= 240;
        ans += (min/30)*60;
    }

    cout << ans << "\n";
}

