using namespace std;
#include <iostream>

int main()
{
    int row, col;

    while(cin >> row >> col)
    {
        int a[row][col];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
                cin >> a[i][j];
        }

        int b[col][row];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                b[j][i] = a[i][j];
            }
        }

        for(int i=0; i<col; i++)
        {
            for(int j=0; j<row; j++)
            {
                cout << b[i][j];
                if(j<row-1)
                    cout << " ";
            }
            cout << "\n";
        }
    }
}
