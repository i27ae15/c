#include <string>
#include <vector>
#include <iostream>


using namespace std;

void move_zeros(std::vector<int>& nums);
void solution_two(std::vector<int>& nums);


int main() {

    vector<int> nums {5, 0, 3, 0, 0, 0};

    solution_two(nums);

    for (auto i : nums) {
        cout << i << ", ";
    }

}


void third_solution(vector<int>& nums){
    int left {};
    int right {};
    int size {};


    while (size < right){
        if (nums[right] == 0){
            right++;
        }
        else {
            swap(nums[right], nums[left]);
            right++;
            left++;
            
        }
    }
}


void solution_two(vector<int>& nums){

    int current_count = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        
        if (i > current_count){
            break;
        }

        if (nums.at(i) == 0) {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
            current_count--;
            i--;
        }
    
    }

}


void move_zeros(vector<int>& nums) {

    vector<int> zeros {};

    
    for (int i = 0; i < nums.size(); i++) {
        
        if (nums.at(i) == 0) {
            nums.erase(nums.begin() + i);
            zeros.push_back(0);
            cout << i << endl;
            i--;
        }
    
    }


    cout << endl;

    nums.insert(nums.end(), zeros.begin(), zeros.end());
        
}

