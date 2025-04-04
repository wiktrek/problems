#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int nums[50];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k_score = nums[k-1];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] >= k_score && nums[i] != 0) {
            j++;
        }
    }
    cout << j;
    return 0;
}