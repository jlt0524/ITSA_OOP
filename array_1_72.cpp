using namespace std;
#include <iostream>
#include <string.h>

int main()
{
    int n, a, b, ans;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        ans = a*250 + b*175;
        cout << ans << "\n";
    }
}

