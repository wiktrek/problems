#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long a,b;
    cin >> a >> b;
    
    long long n = b-a+1;
    long long even = b/2 - (a-1)/2;

    cout << (long long)(n - (even%2 + (n-even)%2));
    return 0;
}