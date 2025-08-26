#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

const ll INF = 1e18;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> cost(n);
    for (int i = 0; i < n; i++) cin >> cost[i];
    
    vector<string> s(n), rs(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        rs[i] = s[i];
        reverse(rs[i].begin(), rs[i].end());
    }

    vector<vector<ll>> dp(n, vector<ll>(2, INF));

    dp[0][0] = 0;
    dp[0][1] = cost[0]; 

    for (int i = 1; i < n; i++) {

        if (s[i] >= s[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][0]);
        if (s[i] >= rs[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][1]);

        if (rs[i] >= s[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][0] + cost[i]);
        if (rs[i] >= rs[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][1] + cost[i]);
    }

    ll ans = min(dp[n-1][0], dp[n-1][1]);
    if (ans >= INF) cout << -1 << "\n";
    else cout << ans << "\n";
}