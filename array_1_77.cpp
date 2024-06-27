using namespace std;
#include <iostream>
#include <string.h>

int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col], counter=1;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            a[i][j]=counter;
            counter++;
        }
    }

    int b[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            b[i][j]=a[row-i-1][col-j-1];
            cout << b[i][j];
            if(j!=col-1)
                cout << " ";
        }
        cout << "\n";
    }
}
