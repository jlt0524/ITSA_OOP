using namespace std;
#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>

int main()
{
    float n, ans;
    int gender;

    while(cin >> n >> gender)
    {
        if(gender==1)
            ans = (n-80)*0.7;
        else
            ans = (n-70)*0.6;
        cout << fixed << setprecision(1) << ans << "\n";
    }
}
