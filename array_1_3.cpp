using namespace std;
#include <iostream>
#include <cmath>

int main() {
    int a[6], ans = 0;

    for(int i=0; i<6; ++i) {
        cin >> a[i];
        ans += pow(a[i], 3);
    }
    cout << ans << endl;
    return 0;
}
