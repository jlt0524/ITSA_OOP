using namespace std;
#include <iostream>
#include <string.h>

int main()
{
    int n, k;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> k;

        int a=0, b=1;
        if(k==1)
            cout << "1";
        else
            cout << "1 ";
        for(int j=0; j<k-1; j++)
        {
            int tmp = a + b;
            a = b;
            b = tmp;
            cout <<  tmp;
            if(j!=k-2)
                cout << " ";
        }
        cout << "\n";
    }
}
