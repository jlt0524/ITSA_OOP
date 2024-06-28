using namespace std;
#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    int n;
    float s, w;

    cin >> n;

    if(n<=120)
    {
        s = (2.10)*n;
        w = (2.10)*n;
    }
    else if(120<n && n<=330)
    {
        s = (2.10)*120 + (3.02)*(n-120);
        w = (2.10)*120 + (2.68)*(n-120);
    }
    else if(330<n && n<=500)
    {
        s = (2.10)*120 + (3.02)*(330-120) + (4.39)*(n-330);
        w = (2.10)*120 + (2.68)*(330-120) + (3.61)*(n-330);
    }
    else if(500<n && n<=700)
    {
        s = (2.10)*120 + (3.02)*(330-120) + (4.39)*(500-330) + (4.97)*(n-500);
        w = (2.10)*120 + (2.68)*(330-120) + (3.61)*(500-330) + (4.01)*(n-500);
    }
    else
    {
        s = (2.10)*120 + (3.02)*(330-120) + (4.39)*(500-330) + (4.97)*(700-500) + (5.63)*(n-700);
        w = (2.10)*120 + (2.68)*(330-120) + (3.61)*(500-330) + (4.01)*(700-500) + (4.5)*(n-700);
    }

    cout << "Summer months:" << fixed << setprecision(2) << s << "\nNon-Summer months:" << w << "\n";
}
