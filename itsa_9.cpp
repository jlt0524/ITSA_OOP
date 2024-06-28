using namespace std;
#include <iostream>

int main()
{
    int n, ans;

    while(cin >> n)
    {
        ans = 0;
        for(int i=1; i<=n; i++)
        {
            if(i%3==0)
                ans+=i;
        }
        cout << ans << "\n";
    }
}
