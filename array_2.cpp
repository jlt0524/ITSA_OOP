using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    float x, y, dis;

    while(cin >> x >> y)
    {
        dis = sqrt( pow(x, 2) + pow(y, 2) );
        if(dis > 100)
            printf("outside\n");
        else
            printf("inside\n");
    }
}
