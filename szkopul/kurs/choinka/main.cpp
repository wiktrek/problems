#include <iostream>
using namespace std;
string gen(int n, char c) {
    string str = "";
    for (int i =0;i<n;i++) {
        str += c;
    }
    return str;
}
int main() {
    int n;
    cin >> n;    
    for (int i = 0;i<n;i++) {
        cout << gen(n-(i+1),' ')+gen(i*2+1,'*') << "\n";
    }
    cout << gen(n-1,' ')+"*" << "\n";
    cout << gen(n-1,' ')+"*";
    return 0;
}