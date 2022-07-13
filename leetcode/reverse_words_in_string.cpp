#include <iostream>
#include <string>
#include <vector>

using namespace std;


string first_solution(string s);
void print(string s);
void reverse_word(string &s, int pointer_one, int pointer_two);



int main(){

    string s = "God Ding";
    string result = first_solution(s);

    cout << result << endl;

    // print(result);


}


string first_solution(string s) {

    int find_at {};
    int current_index {};

    while (true) {

        find_at = s.find(' ', find_at + 1);

        if (find_at == string::npos) {
            break;
        }

        reverse_word(s, current_index, find_at - 1);
        current_index = find_at + 1;
    }

    reverse_word(s, current_index, s.size() - 1);
    return s;
    
}


void reverse_word (string &s, int pointer_one, int pointer_two){


    while (pointer_one != pointer_two && pointer_two > pointer_one) {

        swap (s.at(pointer_one), s.at(pointer_two));

        pointer_one++;
        pointer_two--;

    }

}





void print(const string s){
    for (auto i : s){
        cout << i;
    }
}