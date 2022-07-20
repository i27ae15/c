#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

bool first_solution(string s1, string s2);


int main(){

    string s1 = "abc";
    string s2 = "eidbaooo";

    cout << boolalpha;
    first_solution(s1, s2);

}


bool first_solution(string s1, string s2){


    map<string, bool> permutations;
    string original_str = s1;

    size_t movements {};

    while (true){

        string current_iteration = s1;

        
        if (original_str == s1 && movements == s1.length()){
            break;
        }

        while (true){
            // movements = 3
            // current_iteration = abc
            // s1 = abc
            permutations[s1] = true;

            char character = s1[1];
            s1.erase(1, 1);
            s1.push_back(character);


            if (current_iteration == s1){ 
                
                char c = s1[0];
                s1.erase(0, 1);
                s1.push_back(c);

                movements++;
                break; 
            } 
        }
    }

     for ( const auto &myPair : permutations ) {
        cout << myPair.first << "\n";
    }


    return false;

}

