using namespace std;
#include <iostream>

int main()
{
    int n;

    while(cin >> n)
    {
        if(3<=n && n<=5)
            cout << "Spring\n";
        else if(6<=n && n<=8)
            cout << "Summer\n";
        else if(9<=n && n<=11)
            cout << "Autumn\n";
        else
            cout << "Winter\n";
    }
}
