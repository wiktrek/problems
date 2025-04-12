#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    int index;
    for (int i = 0; i < 25; i++) {
        cin >> num;
        if (num == 1) {
            index = i;
            break;
        }
    }
    int i = floor((index) / 5);
    int j = index - i * 5;
    cout << abs(2 - j) + abs(2 - i); 
}