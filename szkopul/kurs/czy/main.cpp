#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INF 1000000009LL
using namespace std;
int main() {
    ll i;
    cin >> i;
    while (i != 1) {
        if (i == 3) {
            cout << "NIE";
            return 0;
        }
        if (i % 2 == 0) i = i/2; else i = i * 3 + 3;
    }
    cout << "TAK";
    return 0;
}