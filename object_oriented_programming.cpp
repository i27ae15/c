#include <iostream>
#include <string>

using namespace std;


// can create a pointer with *variable <the value in memory> and &letter <this if for the route of the memory>

// cahr *pointer = &letter

// int main() {

//     char letter = 'A';
//     char *pointer = &letter;

//     cout << letter << endl;
//     cout << (int *) pointer << endl;
//     cout << *pointer << endl;
    
// }

// data structures


// struct Person
// {
//     string name;
//     int age;
// };


// int main() {

//     Person p1 = Person();
//     Person *p2 = new Person();

//     p1.name = "Andres";
//     p1.age = 20;

//     p2->name = "Andres pointer";
//     p2->age = 21;


// }


// unions and enumerations

// int main() {

//     // with unions you can save in the same memory space different values

//     union number_letter
//     {
//         int number;
//         char letter;
//     };

//     number_letter x = {'A'};
    

//     // cout << "X like a number: " << (char) x.number << endl;
//     // cout << "X like a letter: " << x.letter << endl;


//     enum week_days {monday='m', tuesday, wednesday};

//     week_days day = monday;

//     cout << (char)day;

// }


// Object oriented programming


class Person { 
private:
    string name;
    int age;

public:
    Person(string n, int e) : name(n), age(e) {}

    // Person(string n) {

    // }

    ~Person(){
        // do this when using pointers
        cout << "destructor" << endl;
        // it is executed when a class is done
    }

    string greeting(){
        return name;
    }

};

int main() {

    Person p = Person("Andres", 20);
    Person *p2 = new Person("Camila", 18);

    // cout << p.name;
    // cout << p2->name;

    cout << p2->greeting() << endl;

    delete p2;



}
