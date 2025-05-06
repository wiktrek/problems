#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int chars[32] = {0};
    int distinct = 0;
    for (int i;i < input.length(); i++) {
        if (chars[input[i] - 'a'] == 0) {
            distinct +=1;
            chars[input[i] - 'a'] = 1;
        }
    }
    cout << ((distinct % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}