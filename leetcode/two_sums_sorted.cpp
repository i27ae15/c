#include <iostream>
#include <vector>

using namespace std;


vector<int> first_solution(vector<int>& numbers, int target);



int main() {

    vector<int> numbers {0,0,3,4};
    int target {0};

    vector<int> solution = first_solution(numbers, target);

    for (auto i : solution){
        cout << i << ", ";
    }
}



vector<int> first_solution(vector<int>& numbers, int target){


    int left {};
    int right = numbers.size() - 1;


    if (numbers[left] >= 0){
        // This will mean that there are just positibe numbers in the vector

        while (target < numbers[right]){
        right--;
        }

    } else if (numbers[right] <= 0) {
        // This will mean that there are just negatives numbers in the vector

        while (target > numbers[left]){
            left++;
        }
    }

    cout << "right: " << right << endl;
    cout << "left: " << left << endl;

    // We then check for the values tha are repeating in the right part side and in the left part side 

    while (numbers[right] == numbers[right - 1] && right >= 2){
        if (numbers[right - 1] == numbers[right - 2]){right--;} else{break;}
    }

    while (numbers[left] == numbers[left + 1] && left >= numbers.size() - 3) {
        if (numbers[left + 1] == numbers[left + 2]){left++;} else{break;}
    }

    // If the vector has both , negative and positibe numbers, as far as I am concerned there is no way to 
    // to determine which numbers to take

    while (true) {

        if (numbers[left] + numbers[right] == target){
            return vector<int> {left + 1, right + 1};
        }

        left++;

        if (left >= right) {
            left = 0;
            right--;
        }
    }

}

