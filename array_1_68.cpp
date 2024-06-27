using namespace std;
#include <iostream>

int main()
{
    int h, m;
    cin >> h >> m;

    if(h == 23 || h == 0)
        cout << "rat\n";
    else if(h == 1 || h == 2)
        cout << "ox\n";
    else if(h == 3 || h == 4)
        cout << "tiger\n";
    else if(h == 5 || h == 6)
        cout << "rabbit\n";
    else if(h == 7 || h == 8)
        cout << "dragon\n";
    else if(h == 9 || h == 10)
        cout << "snake\n";
    else if(h == 11 || h == 12)
        cout << "horse\n";
    else if(h == 13 || h == 14)
        cout << "goat\n";
    else if(h == 15 || h == 16)
        cout << "monkey\n";
    else if(h == 17 || h == 18)
        cout << "rooster\n";
    else if(h == 19 || h == 20)
        cout << "dog\n";
    else if(h == 21 || h == 22)
        cout << "pig\n";
}
