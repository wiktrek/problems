#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INF 1000000009LL
using namespace std;
int main() {
    int x,y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "0";
        return 0;
    } else if (x==0) {
        cout << "OY";
        return 0;
    } else if (y==0) {
        cout << "OX";
        return 0;
    }
    if (x > 0 && y > 0) {
        cout << "I";
        return 0;
    }
    if (x < 0 && y > 0) {
        cout << "II";
        return 0;
    }
    if (x < 0 && y < 0) {
        cout << "III";
        return 0;
    }
    if (x > 0 && y < 0) {
        cout << "IV";
        return 0;
    }
    return 0;
}