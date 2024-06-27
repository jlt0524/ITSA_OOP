using namespace std;
#include <iostream>

int main()
{
    int n;
    cin >> n;
    n = n%12;

    if(n==4)
        cout << "rat\n";
    else if(n==5)
        cout << "ox\n";
    else if(n==6)
        cout << "tiger\n";
    else if(n==7)
        cout << "rabbit\n";
    else if(n==8)
        cout << "dragon\n";
    else if(n==9)
        cout << "snake\n";
    else if(n==10)
        cout << "horse\n";
    else if(n==11)
        cout << "goat\n";
    else if(n==12)
        cout << "monkey\n";
    else if(n==1)
        cout << "rooster\n";
    else if(n==2)
        cout << "dog\n";
    else if(n==3)
        cout << "pig\n";

    if(n<=6)
        n+=6;
    else
        n-=6;

    if(n==4)
        cout << "rat\n";
    else if(n==5)
        cout << "ox\n";
    else if(n==6)
        cout << "tiger\n";
    else if(n==7)
        cout << "rabbit\n";
    else if(n==8)
        cout << "dragon\n";
    else if(n==9)
        cout << "snake\n";
    else if(n==10)
        cout << "horse\n";
    else if(n==11)
        cout << "goat\n";
    else if(n==12)
        cout << "monkey\n";
    else if(n==1)
        cout << "rooster\n";
    else if(n==2)
        cout << "dog\n";
    else if(n==3)
        cout << "pig\n";
}

