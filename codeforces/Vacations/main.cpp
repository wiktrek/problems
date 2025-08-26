#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> readInput(int &n) {
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return a;
}


int minRestDays(int n, const vector<int>& a) {
    vector<vector<int>> dp(n + 1, vector<int>(3, 101));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = 1 + min({dp[i-1][0], dp[i-1][1], dp[i-1][2]});

        if (a[i-1] == 1 || a[i-1] == 3) {
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        }

        if (a[i-1] == 2 || a[i-1] == 3) {
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
    }

    return min({dp[n][0], dp[n][1], dp[n][2]});
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> a = readInput(n);

    int result = minRestDays(n, a);
    cout << result;

    return 0;
}