using namespace std;
#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    int n, m;
    cin >> m >> n;
    vector<float> perc(m), stu(m);
    float sum = 0;

    for(int i=0; i<m; i++)
        cin >> perc[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> stu[j];
            sum += stu[j] * perc[j];
        }
    }
    cout << fixed << setprecision(2) << sum/n << endl;

    return 0;
}
