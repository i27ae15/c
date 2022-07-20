#include <vector>
#include <iostream>
#include <string>

using namespace std;


// a pointer points to a variable or to a function 
void dynamic_memory();

int main() {
    int *pointer {}; // this will be a pointer to a int variable 
    double* pointer2 {nullptr}; // this will be a pointer to a double variable
    // the asterisk can be placed next to the variable or to the name of the variable
    char *pointer3 {nullptr}; // this will be a pointer to a char variable
    string *pointer4 {nullptr}; // this will be a pointer to a string variable


    // // if the pointers are not initialized they will point to garbage date

    // // & the address operator


    int num {10};
    int *num_pointer = &num;

    vector<int> *vector_pointer {nullptr};


    // for (auto i : *vector_pointer){
    //     cout << i << ", ";
    // }


    dynamic_memory();

    // to access the date the pointer is pointing to we got to use the *

}



// Dynamic memory allocation


void dynamic_memory(){

    int *int_ptr {nullptr};

    int_ptr = new int;

    cout << int_ptr << endl;

    delete int_ptr;

    size_t size {};
    double *double_ptr {nullptr};

    cout << "how many pointers?" << endl;
    cin >> size;

    double_ptr = new double[size];

    cout << double_ptr << endl;
    delete [] double_ptr; 



    // we can use ++ to pointer to the contiguos slot of memory that pointer points to


}