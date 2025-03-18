#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int solved = 0;
    for (int i; i<n;i++) {
        int a;
        int b;
        int c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a + b + c >= 2) {
            solved++;
        }
    }
    cout << solved;
    return 0;
}