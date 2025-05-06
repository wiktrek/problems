#include <iostream>
using namespace std;
int toLowerCase(char c) {
    if (c >= 65 && c <= 90) {
        return c + 32;
    } else {
        return c;
    }
}
int main() {
    string str;
    cin >> str;
    int vowels[32] = {0};
    vowels[0] = 1;
    vowels[4] = 1;
    vowels[8] = 1;
    vowels[14] =1;
    vowels[20] = 1;
    vowels[24] = 1;
    string final_string;
    for (int i = 0;i < str.length();i++) {
        str[i] = toLowerCase(str[i]);
        if (vowels[str[i] - 97] == 0) {
            final_string += str[i];
        }
    }
    for (int i;i < final_string.length();i+=2) {
        final_string.insert(i,1,'.');
    }
    cout << final_string;
    return 0;
}
