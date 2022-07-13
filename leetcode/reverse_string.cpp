#include <iostream>
#include <string>
#include <vector>

#pragma once

using namespace std;

void first_solution(vector<char>& s);
void second_solution(vector<char>& s);
void print(const vector<char> s);


int main () {

    vector<char> s = {'H', 'e', 'l', 'a', 't', 'e', 'l', 'a', 't', 'e'};

    second_solution(s);
    print(s);
   
}

// this one is better for reading pourposes



void first_solution(vector<char>& s) {
        
    int pointer_one {};
    int pointer_two = s.size() - 1;

    while (pointer_one != pointer_two && pointer_two > pointer_one) {

        swap (s.at(pointer_one), s.at(pointer_two));

        pointer_one++;
        pointer_two--;

    }

}



// this one use less memory
void second_solution(vector<char>& s) {


    for (int i {}; i < s.size(); i++) {

        if (i == s.size() - 1 -i || i > s.size() - 1 - i) { 
            break;
        }

        swap (s.at(i), s.at(s.size() - i - 1));

    }

}

void print(const vector<char> s){
    for (char i : s){
        cout << i << ", ";
    }
}


