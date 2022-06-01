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


// class Person { 
// private:
//     string name;
//     int age;

// public:
//     Person(string n, int e) : name(n), age(e) {}

//     // Person(string n) {

//     // }

//     ~Person(){
//         // do this when using pointers
//         cout << "destructor" << endl;
//         // it is executed when a class is done
//     }

//     string greeting(){
//         return name;
//     }

// };

// int main() {

//     Person p = Person("Andres", 20);
//     Person *p2 = new Person("Camila", 18);

//     // cout << p.name;
//     // cout << p2->name;

//     cout << p2->greeting() << endl;

//     delete p2;



//}


// class Person { 
// private:

//     string name;
//     int age;

// public:

//     static int people_number;


//     Person(string name, int age);

//     ~Person(){
//         // do this when using pointers
//         cout << "destructor" << endl;
//         // it is executed when a class is done
//     }

//     Person &updateName(string name){
//         this->name = name;
//         return *this;
//     }

//     Person &changeAge(int age) {
//         this->age = age;
//         return *this;
//     }

//     void greeting();

// };

// int Person::people_number = 0;
// void Person::greeting() {
//     cout << this->name << endl;
// }

// Person::Person(string name, int age) {
//         this->name = name;
//         this->age = age;
//         this->people_number++;
//     }

// // we can create here the constructor, not just inside the class


// int main() {

//     Person p = Person("Andres", 20);
//     Person *p2 = new Person("Camila", 18);

//     cout << "number of people: " << Person::people_number << endl;

//     p2->updateName("Pollo").greeting();

//     delete p2;



// }

class Animal {
    protected:
        static int numeroAnimales;
        string alimento;
    public:
        Animal();
        ~Animal();
        static int obtenerNumeroAnimales();
        string obtenerAlimento() {
            return alimento;
        }
        void comer(Animal *a) {
            cout << "Este animal está comiendo " << a->alimento << "... ñom ñom" << endl;
        }
};

int Animal::numeroAnimales = 0;

Animal::Animal() {
    cout << "Creando nuevo animal..." << endl;
    numeroAnimales += 1;
}

Animal::~Animal() {
    cout << "Borrando animal..." << endl;
    numeroAnimales -= 1;
}

int Animal::obtenerNumeroAnimales() {
    return numeroAnimales;
}

class Herviboro : public Animal {
    public:
        Herviboro() : Animal() {
            this->alimento = "plantas";
        }
        void pastar() {
            cout << "Este animal está pastando..." << endl;
        }
};

class Carnivoro : public Animal {
    public:
        Carnivoro() : Animal() {
            this->alimento = "carne";
        }
        void cazar() {
            cout << "Este animal está cazando..." << endl;
        }
};

class Omnivoro : public Herviboro, public Carnivoro {
    public:
        Omnivoro() : Herviboro(), Carnivoro() {}

    void comer() {
        cout << "Este animal come lo que sea" << endl;
    }


};

int main() {
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout << "Numero de animales " << Animal::obtenerNumeroAnimales() << endl;
    
    //a->comer();    
    
    h->pastar();
    // h->comer();
    a->comer(h);

    c->cazar();
    // c->comer();
    a->comer(c);


    cout << "Omnivoro" << endl;
    // o->Carnivoro::comer();
    o->comer();
    

    delete a;
    cout << "Numero de animales " << Animal::obtenerNumeroAnimales() << endl;

    //Polimorfism, a way to communicate in the same class but with differents instance of that class 
}
