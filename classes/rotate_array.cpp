#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]



void rotate(vector<int>& nums, int k) {

    // too low
    // for (size_t i {}; i < k; i++) {
        
    //     int current_index = (nums.size() - 1);
    //     int current_number = nums.at(current_index);

    //     cout << "current_number: " << current_number << endl;

    //     nums.pop_back();

    //     auto pos = nums.begin();
    //     nums.insert(pos, current_number);
    // }

    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
        
}


int main() {

    //vector<int> nums = {-1,-100,3,99};
    vector<int> nums2 = {1, 2};
    int k {3};
    rotate(nums2, k);
    //rotate(nums2, 3);

    // for (auto i: nums){
    //     cout << i << ", ";
    // }

    // cout << endl;

    for (auto i: nums2){
        cout << i << ", ";
    }

    cout << endl;
}