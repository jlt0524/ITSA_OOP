using namespace std;
#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>

int main()
{
    float a[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            cin >> a[i][j];
    }

    float det = a[0][0]*a[1][1]-a[0][1]*a[1][0];
    int in_det = det;

    float tmp = a[0][0];
    a[0][0] = a[1][1];
    a[1][1] = tmp;

    a[0][1] = -a[0][1];
    a[1][0] = -a[1][0];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            int in = a[i][j];
            if(in%in_det == 0)
                cout << fixed << setprecision(0) << a[i][j]/det;
            else
                cout << fixed << setprecision(1) << a[i][j]/det;
            if(j!=1)
                cout << " ";
        }
        cout << "\n";
    }
}
