#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long double n,m,a;
    cin >> n >> m >> a;
    cout.precision(22);
    cout << (ceil(n / a) * ceil(m/a));
    return 0;
}