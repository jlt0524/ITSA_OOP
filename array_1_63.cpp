using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int c1, r1, c2, r2;

    cin >> r1 >> c1;
    vector<vector<int> > a(r1, vector<int>(c1));
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
            cin >> a[i][j];
    }

    cin >> r2 >> c2;

    vector<vector<int> > b(r2, vector<int>(c2));
    for(int i = 0; i < r2; i++) 
    {
        for(int j = 0; j < c2; j++)
            cin >> b[i][j];
    }

    vector<vector<int> > c(r1, vector<int>(c1));
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j];
            if(j != c1 - 1)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
