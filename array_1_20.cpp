using namespace std;
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, ans = 1;
    cin >> n;
    vector<int> a(n), check(128, 0);

    for(int i=0; i<n; ++i) {
        cin >> a[i];
        check[a[i]-1]++;
        if(check[a[i]-1] > 1)
            ans = 0;
    }
    cout << ans << endl;
    return 0;
}
