using namespace std;
#include <iostream>
#include <vector>

int main()
{

    vector<int> n(6);
    vector<vector<int> > ans(6, vector<int>(6));

    for(int i = 0; i < 6; i++)
        cin >> n[i];

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            ans[i][j] = n[i] * n[j];
            if(ans[i][j] < 10)
                cout << "00" << ans[i][j];
            else if(ans[i][j] < 100)
                cout << "0" << ans[i][j];
            else
                cout << ans[i][j];
            if(j != 5)
                cout << " ";
        }
        cout << "\n";
    }
}
