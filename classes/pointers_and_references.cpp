#include <vector>
#include <iostream>
#include <string>

using namespace std;


// a pointer points to a variable or to a function 


int main() {
    int *pointer {}; // this will be a pointer to a int variable 
    double* pointer2 {nullptr}; // this will be a pointer to a double variable
    // the asterisk can be placed next to the variable or to the name of the variable
    char *pointer3 {nullptr}; // this will be a pointer to a char variable
    string *pointer4 {nullptr}; // this will be a pointer to a string variable


    // if the pointers are not initialized they will point to garbage date

    // & the address operator


    int num {10};
    int *num_pointer = &num;

    // to access the date the pointer is pointing to we got to use the *

    cout << num_pointer << endl;

}