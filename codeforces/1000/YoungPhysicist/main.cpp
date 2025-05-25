#include <iostream>
using namespace std;
int main() {
    int n,x,y,z;
    int sumx = 0,sumy = 0 ,sumz = 0;
    cin >> n;
    for (int i =0; i<n; i++) {
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    cout << (sumx == 0 && sumy == 0 && sumz == 0 ? "YES": "NO");
}