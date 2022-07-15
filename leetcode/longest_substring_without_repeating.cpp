#include <iostream>
#include <string>
#include <map>


using namespace std;


int first_solution(string s);



int main(){

    string s = "aabaab!bb";
    int longest = first_solution(s);
    
    cout << longest << endl;


    // to avoid this issue 

}


// time limit exceeded
// with the chnages, the function works, but it is very slow, this could be better
int first_solution(string s) {

    map<char, int> found_at;
    map<char, bool> current_iteration;

    string longest_string {};
    string current_string {};

    int max_found {};
    int current_count {};

    int start_at {};
    int i {};
    char current_char {};

    while (start_at < s.length()) {
        
        current_char = s[i];

        // cout << "current_iteration: " << current_char << endl;
        // cout << "i: " << i << endl;

        // checking if the string is reapeating

        if (found_at[current_char] > i) {
            // if the found at current_char is greater than the current letter we are accessing
            // it will mean that this letter has already been visited in the current iteration
            // so, there must have a bigger string whithin this iteration meaning that there is no 
            // reason to continue visiting the other letters
            i++;
            start_at = i;
            continue;
        }

        
        if (i + longest_string.length() < s.length() && longest_string.length() > 2) {
            
            string substring;

            if (!i){
                substring =  s.substr(i, longest_string.length());
            } else {
                substring =  s.substr(i - 1, longest_string.length());
            }

            if (longest_string == substring && longest_string.length() != 0 && current_string.length() != 0) {
                cout << "longest_string: " << longest_string << endl;
                cout << "substring: " << substring << endl;

                start_at = i + longest_string.length();
                i = start_at;
            }
        }


        if (current_iteration[current_char] || i >= s.length()) {
            // this will mean that we there are duplicates in the current iteration so we must stop it
            current_iteration.clear();

            if (current_count > max_found){
                max_found = current_count;
                longest_string = current_string;
            }

            current_count = 0;
            start_at++;
            i = start_at;
            
            current_string.clear();
        
        } else if (current_iteration[current_char] == 0){
            current_count++;
            i++;
            current_iteration[current_char] = true;
            current_string.push_back(current_char);
        }

        found_at[current_char] = i - 1;
    }

    if (current_count > max_found){
        max_found = current_count;
    }

    return max_found;


}