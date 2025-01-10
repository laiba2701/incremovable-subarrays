#include <iostream>
#include <vector>

using namespace std;

int countIncreasingSubarrays(const vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        int len = 1; // Each element is an increasing subarray itself
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            ++len;
            ++i;
        }
        // Add the count of all increasing subarrays for this segment
        count += (len * (len + 1)) / 2;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int count = countIncreasingSubarrays(nums);
    cout << "Number of increasing subarrays: " << count << endl;

    return 0;
}
