#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i; i < n;i++) {
        string a;
        cin >> a;
        if (a.find("++") != string::npos) {
            x = x +1;
        } else {
            x = x -1;
        }
    }
    cout << x;
    return 0;
}