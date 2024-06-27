using namespace std;
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    cin >> n;
    vector<float> a(n), b(n), c(n);
    float a_t = 0, b_t = 0, c_t = 0, t = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        a_t += a[i];
        b_t += b[i];
        c_t += c[i];
        t += a[i] + b[i] + c[i];
    }
    cout.precision(1);
    cout << fixed << t/(3*n) << " " << a_t/n << " " << b_t/n << " " << c_t/n << endl;
    return 0;
}
