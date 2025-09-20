/*
    O(n^2)
    swap ( nums[i], nums[j] = nums[j], nums[i] )

*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> bubble_sort(vector<int> nums) {
    for (int i = 0;i<nums.size();i++) {
        for (int j =0;j<nums.size()-i-1;j++) {
            if (nums[j] > nums[j+1]) {
                int r = nums[j];
                nums[j] = nums[j + 1];
                nums[j+1] = r;
            }
        }
    }
    return nums;
}
int main() {
    vector<int> nums = {0,2,32,1312,313,412,31,41,23,4123,54};
    nums = bubble_sort(nums);
    for (int i = 0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
