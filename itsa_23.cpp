using namespace std;
#include <iostream>
#include <string.h>
#include <cstdio>
#include <math.h>

int main()
{
    int n, m1, m2, m3;
    scanf("%d,%d,%d,%d", &n, &m1, &m2, &m3);

    n = n - m1*15 - m2*20 - m3*30;

    if(n<0)
        cout << "0\n";
    else
    {
        int c1=0, c2=0, c3=0;   //50,5,1
        while(n>=50)
        {
            n -= 50;
            c1++;
        }
        while(n>=5)
        {
            n -= 5;
            c2++;
        }
        cout << n << "," << c2 << "," << c1 << "\n";
    }
}


