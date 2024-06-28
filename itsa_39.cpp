using namespace std;
#include <iostream>
#include <string.h>
#include <math.h>

int main()
{
    int n, a[3], ans, count_fail;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        ans = 0, count_fail = 0;
        cin >> a[0] >> a[1] >> a[2];
        for(int j=0; j<3; j++)
        {
            if(a[j]<60)
                count_fail++;
        }
        if(count_fail == 0)
            cout << "P\n";
        else if(a[0] + a[1] + a[2] >= 220 && count_fail == 1)
            cout << "P\n";
        else if(a[0] + a[1] + a[2] < 220 && count_fail == 1)
            cout << "M\n";
        else if( (a[0] >= 80 || a[1] >= 80 || a[2] >= 80) && count_fail == 2 )
            cout << "M\n";
        else
            cout << "F\n";
    }
}
