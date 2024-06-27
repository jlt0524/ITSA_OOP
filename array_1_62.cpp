using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int c1, r1, c2, r2;

    cin >> r1 >> c1;
    vector<vector<int> > a(r1, vector<int>(c1));
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
            cin >> a[i][j];
    }

    cin >> r2 >> c2;
    vector<vector<int> > b(r2, vector<int>(c2));
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
            cin >> b[i][j];
    }

    vector<vector<int> > c(r1, vector<int>(c2, 0));
    for(int i=0; i<r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k=0; k<c1; k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }

    for(int i=0; i<r1; i++) 
    {
        for(int j=0; j<c2; j++) 
        {
            cout << c[i][j];
            if(j != c2-1)
                cout << " ";
        }
        cout << "\n";
    }
}
