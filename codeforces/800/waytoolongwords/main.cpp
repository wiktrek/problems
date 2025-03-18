#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    int n;
    cin >> n;
    for (int i; i < n; i++) {
        cin >> a;
        if (a.length() > 10) {
            cout << a[0] << (a.length() - 2) << a[a.length() - 1] << endl;
        } else {
            cout << a << endl;
        }
    }
    return 0;
}