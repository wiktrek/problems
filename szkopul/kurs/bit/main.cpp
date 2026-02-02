#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n==1) {
        cout << "TAK";
        return 0;
    }
    int last,a;
    cin >> last;
    cin >> a;
    bool rosnie = (a > last);
    if (a==last) {cout << "NIE";return 0;};
    last = a;
    for (int i = 2;i<n;i++) {
        cin >> a;
        if (a==last) {cout << "NIE";return 0;}
        if (rosnie) {
            if (a < last) {
                rosnie = false;
            }
        } else {
            if (a > last) {
                cout << "NIE";
                return 0;
            }
        }
        last = a;
    }
    cout << "TAK";
    return 0;
}