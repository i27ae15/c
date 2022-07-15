#include <iostream>
#include <cmath>
#include <cstdlib> // for random number generator
#include <ctime> // required for time

using namespace std;


// we can use auto word to declare a function too

auto function(){
    int random_number;
    size_t count {10};
    int min {1};
    int max {6};

    cout << "max random number is " << RAND_MAX << endl;

    srand(time(nullptr));

    for (size_t i {1}; i <=count; i++) {

        random_number = rand() % max + min;
        cout << "random number is " << random_number << endl;

    }

    cout << endl;
}



// we can creaet inline function, these are faster than normal functions

inline int add_numbers(int a, int b){ return a + b; }


unsigned long long factorial(unsigned long long n){
    if (n == 0) return 1;

    return n * factorial(n-1);
}



int main (){
    cout << factorial(20) << endl;
}

