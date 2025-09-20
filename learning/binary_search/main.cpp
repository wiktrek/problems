#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int binary_search(vector<int> nums, int num) {
    int lo = 0;
    int hi = nums.size();
    do {
        int m = floor(lo + (hi - lo)/2); // get the middle index
        int v = nums[m]; // the middle num
        if (v == num) {
            return m;
        } else if (v > num) { // if v > num set the middle to high
            hi = m;
        } else {
            lo = m + 1; // num is bigger than than our middle point (m) so we set the min value to m 
        }
    } while (lo < hi); // if lo == hi that means that there's no num in nums
    return -1;
};

int main() {
    vector<int> nums {0,1,2,3,4,5,6,7,8,9,10,20};
    sort(nums.begin(), nums.end());
    cout << binary_search(nums, 20);
    return 0;
}
