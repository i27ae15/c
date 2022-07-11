#include <iostream>

using namespace std;

// int main() {

//     // char
//     char middle_letter {'j'};


//     // int
//     // unsigned integers can just store positive integers
//     unsigned short int exam_score {55};

//     // long is for long integers
//     long people_in_florida {2500000};

//     // there is an advantage of initializing the numbers in a list type, it does return an error when stackoverflow
//     long long people_on_earth {7'500'000'000};

//     // float numbers 

//     float payment {115.29};

//     // a double is bigger than a float
//     double pi {3.1415926535};

//     long double = bigger_than_double_and_float {3.14e120};

//     // boolean values 

//     bool game_over {false};

//     cout << payment << endl;

// }
    

#include <climits>
#include <vector>
#include <algorithm>

bool isBadVersion(int bad){

    if (bad >= 1702766719){
        return true;
    } else {
        return false;
    }
}


int firstBadVersion(int n) {
    
    long long lowest_index {};
    long long highest_index = n;
    
    vector<int> already_visited {};

    while (true){

        long long current_index = (lowest_index + highest_index) / 2;
        bool current_call = isBadVersion(current_index);

        if (!current_call){
            lowest_index = current_index + 1;
        }
        else {
            highest_index = current_index - 1;
        }

        if (find(already_visited.begin(), already_visited.end(), current_index) != already_visited.end()){
            return current_index + 1;
        }
            
        already_visited.push_back(current_index);

        }

    }

int main(){


    long long bad = firstBadVersion(2126753390);

    cout << "this is the result: " << bad << endl;


}


int binary_search(vector<int>& nums, int target){ 

    int left_pointer {};
    int right_pointer = nums.size() - 1;


    while (true) {
            
        int current_index = (left_pointer + right_pointer) / 2;
        int current_pos = nums.at(current_index);
        
        if (target == current_pos){
            return current_index;
        }

        if (left_pointer >= right_pointer) {
           return -1;
        }
        
        if (target > current_pos){

            left_pointer = current_index + 1;
        } 
        
        else if (target < current_pos){
            right_pointer = current_index - 1;
        }
        
    }

}




