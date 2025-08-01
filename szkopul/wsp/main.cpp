#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 10; i++) {
        cout << arr[a - i - 1] << " ";
    }
    return 0;
}
