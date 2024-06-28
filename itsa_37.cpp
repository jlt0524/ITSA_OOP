using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    int a[4], check[6] = {0}, same[6] = {0}, valid = 0, ans = 0;

    for(int i=0; i<4; i++)
    {
        cin >> a[i];
        check[a[i]-1]++;

        if(check[a[i]-1]==2)
            same[a[i]-1] = 1;

        if(check[a[i]-1]>2)
            same[a[i]-1] = 0;
    }

    int i_pair = 0;

    for(int i=0; i<6; i++)
    {
        if(same[i]==1)
        {
            valid++;
            if(i+1>i_pair)
                i_pair = i+1;
        }
    }

    if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
        cout << "WIN\n";
    else
    {
        if(valid == 1)  //one pair
        {
            for(int i=0; i<6; i++)
            {
                if(i+1!=i_pair && check[i]!=0)
                    ans += i+1;
            }
            cout << ans << "\n";

        }
        else if(valid == 2)  //two pair
            cout << i_pair*2 << "\n";
        else
            cout << "R\n";
    }
}
