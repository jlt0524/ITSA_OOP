using namespace std;
#include <iostream>
#include <string>

int main() {
    string s;
    int ans = 0;

    for(int i=0; i<5; i++)
    {
        cin >> s;
        if(s == "10")
            ans += 10;
        else if(s == "K")
            ans += 13;
        else if(s == "Q")
            ans += 12;
        else if(s == "J")
            ans += 11;
        else if(s == "A")
            ans += 14;
        else
            ans += s[0] - '0';
    }
    cout << ans << endl;
}


