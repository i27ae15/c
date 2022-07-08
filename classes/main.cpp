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
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <string>

void notes(){
    // cout << CHAR_MIN << endl;


    // arrays 
    int test_scores [5] {100,95,89,87,85}; // an array of 5 integers

    int another_array [] {12, 43,}; // this will create an array of n elements


    // accessing the elements of an array

    // cout << "the first element of the array is: " << another_array[0] << endl;


    // assining numbes to the array index

    test_scores[0] = 115;

    int another_array_2 [5] {}; // this will initialize the array with 0 values 
    
    // multi dimensional arrays

    int multi_array_1 [5][5] {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    }; // this will initialize the array with 5 and 5 values

    // vector are dinamyc arrays

    vector <int> test_scores_vector (10, 5); // this will initialize the vector with 10 values and they will automatically be initialized to zero. The first value will tell the size of the vector and the second will tell all those values to be initialized to the number provided 

    //cout << "first element of the vector is " << test_scores_vector.at(0) << endl;

    // to assing element of a vector we do

    test_scores_vector.at(0) = 10; // this will set the first value to 10
    test_scores_vector.push_back(25); // this set the last element to 25
    test_scores_vector.size(); // this will return the size of the vector

    // declaring a two dimensional vector

    vector <vector<double>> two_dimensional_vector {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };

    // we can declare two variables like this

    int number_1 = 0;
    int number_2 = 0;

    number_1 = number_2 = 115;


    //cout << (number_1 + number_2) << endl;

    int test_number {0}; 

    // cout << test_number << endl;

    int total_numbers {100};
    int every_child {8};

    // this will display 12, since we are just getting the integer part of this operation
    int average = total_numbers / every_child;

    double exact_average = static_cast<double>(total_numbers) / every_child; // this will display 12.5
    // static_cast<double>(total_numbers) convert total_numbers to double


    // cout << "the average is " << exact_average << endl;
}


void change_problem(){

    const int dollar {100};
    const int cent {50};
    const int penny {25};
    const int nickel {5};
    const int one {1};

    int change_in_dollar {0};
    int change_in_cent {0};
    int change_in_penny {0};
    int change_in_nickel {0};
    int change_in_one {0};

    int amount {0};

    
    while(true) {
    cout << "enter a number in cents" << endl;

    cin >> amount;

    change_in_dollar = 0;
    change_in_cent = 0;
    change_in_penny = 0;
    change_in_nickel = 0;
    change_in_one = 0;

    // just testing some things i know this could be much better 
    while(amount != 0){

        if(amount >= dollar){
            change_in_dollar++;
            amount -= dollar;

        } else if(amount >= cent){
            change_in_cent++;
            amount -= cent;

        } else if(amount >= penny){
            change_in_penny++;
            amount -= penny;

        } else if(amount >= nickel){
            change_in_nickel++;
            amount -= nickel;

        } else if(amount >= one){
            change_in_one++;
            amount -= one;
        }
    }

    cout << "you can represent the change like this" << endl;
    cout << "dollar(100): " << change_in_dollar << endl;
    cout << "cent(50): " << change_in_cent << endl;
    cout << "penny(25): " << change_in_penny << endl;
    cout << "nickel(5): " << change_in_nickel << endl;
    cout << "one(1): " << change_in_one << endl; 

    }
}


void control_flow(){
    
    // swtich case statament 


    int selection = 0;

    switch (selection)
    {
    case 1:
        cout << "you selected 1" << endl;
        break;
    
    case 2:
        cout << "you selected 2" << endl;
    break;
    default:
        cout << "you selected none of the options" << endl;
        break;
    }


    // conditional operator

    bool if_this_is_true {true};

    // use just when is truely necessary otherwise is better to use a if statement
    // (if_this_is_true) ? cout << "is true" << endl : cout << "is false" << endl;


    // you can have to variables in one for loop

    // multiplying i by j
    // for (int i = 0, int j = 0; i < 10; i++, j++){
    //     cout << i << " " << j << endl;
    // } 


    // range base foor loop

    // int array_int [] {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    vector<int> range {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (int number : range) {
        cout << number << endl;
    }

    // it is not necessary to declare the type of the variable, instead we can use the word auto

    for (auto i : range) {
        cout << i << endl;
    }
    // we can iterate over a string
}


void strings(){
    // we got tolower and toupper

    char first_name[20]; // first name is not initialized
    char last_name[20]; // last name is not initialized

    // uninitialized strings will display garbage, so we need to initialize them

    cout << "introduce your first name and last name " << endl;
    cin >> first_name;
    cin >> last_name;

    char full_name[100]{};

    strlen(first_name); // length of first name

    strcpy(full_name, first_name); // we copy the left part of the function into the right part
    strcat(full_name, " "); // this add an empty space to full_name
    strcat(full_name, last_name); // concatenate the full namd and the last name
    cout << "this is your full name: " << full_name << endl;


    cin.getline(full_name, 50); //

    if (strcmp(full_name, last_name) == 0) {cout << "thye are equal" << endl;}; //

    string s1 {"this is my first name"};

    cout << s1.substr(0, 10) << endl; // display the substr of s1 from the beginning to the 10th position
    s1.find(" ", 6); // find the character given, the right position says the position to start from
    s1.length(); // length of the string

    getline(cin, s1, 'x'); // this will read the entire line until /n orr we can pass the character it must stop at 

    // we shuld write size_t when we want to get the size of the string or the position of a character in the string

    size_t size = s1.length();

    size_t position = s1.find("string to find"); 
    string::npos; // this will tell that there is no position in the string

    if (position != string::npos) {cout << "there is no string in the string" << endl;}

}

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
 
    // control_flow();

    strings();



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




