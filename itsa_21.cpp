using namespace std;
#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float n[10], i_max, i_min;

    for(int i=0; i<10; i++)
    {
        cin >> n[i];
        if(i==0)
        {
            i_max = n[i];
            i_min = n[i];
        }
        if(n[i]>i_max)
            i_max = n[i];
        if(n[i]<i_min)
            i_min = n[i];
    }

    cout << "maximum:" << fixed << setprecision(2) << i_max << "\n" << "minimum:" << i_min << "\n";
}

