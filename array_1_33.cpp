using namespace std;
#include <iostream>
#include <vector>

int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<int> > a(row, vector<int>(col));  //> >
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cin >> a[i][j];
    }
    vector<vector<int> > b(col, vector<int>(row));
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            b[j][i] = a[i][j];
    }

    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << b[i][j];
            if(j < row-1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
