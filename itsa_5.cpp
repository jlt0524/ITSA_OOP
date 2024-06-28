using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    int n, k, ans[8] = {0};

    while(cin >> n)
    {
        if(n<0)
        {
            cout << "1";
            k = 6;
            n = 128 + n;
        }
        else
            k=7;

        for(int i=k; i>=0; i--)
        {
            int m = pow(2, i);
            if(n>=m)
            {
                cout << "1";
                n -= m;
            }
            else
                cout << "0";
        }
        cout << "\n";
    }



}
