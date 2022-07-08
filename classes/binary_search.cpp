#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;



int searchInsert(vector<int>& nums, int target) {
        
    int left_pointer {};
    int right_pointer {nums.size() - 1};
    int current_index {};


    if (target > nums.at(right_pointer)) {
        return right_pointer + 1;
    } 

    if (target < nums.at(left_pointer)) {
        return left_pointer;        
    }


    while (true){

        // getting the half of the vector
        current_index = (left_pointer + right_pointer) / 2;


        if (nums.at(current_index) == target) {
            return current_index;
        }


        if (left_pointer > right_pointer) {
            cout << "getting out here" << endl;
            return current_index + 1;
        }

        if (nums.at(current_index) > target) {

            right_pointer = current_index - 1;
        }

        else if (nums.at(current_index) < target) {

            left_pointer = current_index + 1;
        }

    }        
        
        
}



int main() {


    vector<int> nums {1,3,5,6};

    int target {5};

    int target_index = searchInsert(nums, target);

    cout << target_index << endl;


}

