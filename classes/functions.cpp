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

int main (){

    function();
}