using namespace std;
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    vector<int> a(6);
    for(int i=0; i<6; ++i)
        cin >> a[i];
    for(int i=5; i>=0; --i) {
        cout << a[i];
        if(i > 0)
            cout << " ";
    }
    cout << endl;
    return 0;
}

