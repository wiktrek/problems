#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INF 1000000009LL
using namespace std;
int main() {
    int t;
    cin >> t;
    cout << floor(t/3600) << "g";
    t = t % 3600;
    cout << floor(t/60) << "m";
    t = t % 60;
    cout << floor(t) << "s";
    return 0;
}