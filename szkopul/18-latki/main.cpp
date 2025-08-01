#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int lines;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> lines;
    map<int, int> measurements;
    for (int i = 0;i<lines;i++) {
        char c;
        int num;
        cin >> c;
        if (c =='r') {
            if (measurements.empty()) {
                cout << "PUSTO!" << "\n";
                continue;
            }
            cout << ((measurements.rbegin())->first - measurements.begin()->first) << "\n";
            continue;
        }
        cin >> num;
        if (c == 'u') {
            if (measurements.count(num)) {
                measurements[num]--;
                if (measurements[num] == 0) {
                    measurements.erase(num);
                }
            }

            continue;
        }
        if (c == 'z') {
            if (measurements.count(num) == 0) {
                measurements.insert({num, 1});
            } else {
                measurements[num] += 1;
            }
            
        }
    }
}