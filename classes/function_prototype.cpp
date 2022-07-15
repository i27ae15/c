#include <iostream>
#include <string>
#include <vector>


using namespace std;

const double pi = 3.141592653589793238462643383279502884197;

// Function prototypes
// It is not necessary to have the name of the parameters but it is a good practice to include them
// these functino should be included in the .h file

// default values can only be here of in the main function
// the best practice is to define them in the function prototyps
double area_circle(int x, int y, int radious = 25);

// we can have two function with the same name but with different parameters

int add_numbers(int x, int y);
double add_numbers(double x, double y);
void base_number(int &num);


int main(){

    int num {115};

    base_number(num);
    base_number(num);

}


double area_circle(int x, int y, int radious){

    return pi * radious * radious;


}


// so we define the functions
// overloading functions

// the only factor to have in account is that when there are not paremeters, there is not way 
// for the compiler to know which function to return   
int add_numbers(int x, int y){
    return x + y;
}

double add_numbers(double x, double y) {
    return x + y;
}


void print(vector<int> numbers){

    for (auto i : numbers){
        cout << i << ", ";
    }

}

void print(int n){
    cout << n << endl;
}

// characters are always promoted to int 


// when passing an array to the function, it is not being copied, what is being passed to the function 
// is the memory address of the array

// we can use the const type to just read the values from an array

void array_test(const int numbers [], size_t length){

}


// "&" can be use to pass the reference to tha object to a function

// pass by reference is lighter than passing the value to copy it
void base_number(int &num){

    int num_1 {};
    int num_2 {};

    static int test {5000};

    test--;

    

    cout << test << endl;
    
    // this will be available for all the instances of this function

    // outside is the main scope of the function
    {   
        int num_1 {};
        // This will display the variable "num_1" from the private scope of the function
        cout << num_1 << endl;

        // This will display the variable "num_2" from the public scope of the function, since there is no 
        // reference to the variable in the private scope 
        cout << num_2 << endl;

        // inside is the private scope of the function
        // we can create as many block as we want

    }

}