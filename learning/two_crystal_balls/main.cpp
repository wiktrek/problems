#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int crystal_balls(vector<bool> breaks) {
    int jump = floor(sqrt(breaks.size()));
    int i = jump;
    for (;i<breaks.size();i+=jump) {
        if (breaks[i]) {
            break;
        }
    }
    i -= jump;
    for (int j = 0;j<=jump && i< breaks.size();j++,i++) {
        if (breaks[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<bool> breaks = {0,0,0,0,1,0,0,0,0,1,0,0,0};
    cout << crystal_balls(breaks);
    return 0;
}
