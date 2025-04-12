#include <iostream>
#include <cstring>
using namespace std;
int convert(char c) {
    return int(c);
}
int toLowerCase(int c) {
    if (c >= 65 && c < 96) {
        return c + 32;
    }
    return c;
}
int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int result = 0;
    for (int i; i < str1.length(); i++) {
       int n = toLowerCase(convert(str1[i]));
       int n2 = toLowerCase(convert(str2[i]));
       if (n != n2) {
        if (n > n2) {
            result = 1;
        } else {
            result = -1;
        }
        break;
       }
    }
    cout << result;
    return 0;
}