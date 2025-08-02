#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string to_bin(long long n ) {
    if (n == 0) return "0";
    string bin = "";
    while (n > 0) {
        bin = char('0' + (n%2)) + bin;
        n /=2;
    }
    return bin;
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    string bin = to_bin(n); 
    cout << bin << " ";
    int i =0;
    for (char c : bin) {
        if (c == '1') i++;
    }
    cout << to_bin(i);
    return 0;
}