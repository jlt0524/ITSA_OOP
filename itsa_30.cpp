using namespace std;
#include <iostream>
#include <string.h>
#include <math.h>

int main()
{
    int m, d;
    cin >> m >> d;

    if(m==1 && d>=21 || m==2 && d<=18)
        cout << "Aquarius\n";
    else if(m==2 && d>= 19 || m==3 && d<=20)
        cout << "Pisces\n";
    else if(m==3 && d>= 21 || m==4 && d<=20)
        cout << "Aries\n";
    else if(m==4 && d>= 21 || m==5 && d<=21)
        cout << "Taurus\n";
    else if(m==5 && d>= 22 || m==6 && d<=21)
        cout << "Gemini\n";
    else if(m==6 && d>= 22 || m==7 && d<=22)
        cout << "Cancer\n";
    else if(m==7 && d>= 23 || m==8 && d<=23)
        cout << "Leo\n";
    else if(m==8 && d>= 24 || m==9 && d<=23)
        cout << "Virgo\n";
    else if(m==9 && d>= 24 || m==10 && d<=23)
        cout << "Libra\n";
    else if(m==10 && d>= 24 || m==11 && d<=22)
        cout << "Scorpio\n";
    else if(m==11 && d>= 23 || m==12 && d<=21)
        cout << "Sagittarius\n";
    else if(m==12 && d>= 22 || m==111 && d<=20)
        cout << "Capricorn\n";
}
