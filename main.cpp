#include <iostream>

using namespace std;


// for loops
// int main() {


//     // for (int i = 0; i <= 10; i++) {

//     //     cout << "there is your number: " << i << endl;
        
//     // }

//     int list[] = {1, 2, 3, 4, 5, 6};
//     int integer_value = 4;

//     for (int i = 0; i < sizeof(list) / integer_value; i++){
//         cout << "Your number: " << list[i] << endl; 

//         if (list[i] == 4) {
//             break;
//         }
//     }

// }

// while loops
// int main() {

//     char answer;

//     do {

//         cout << "wanna finish?" << endl;
//         cin >> answer;
    
//     } while (answer != 'y');
    
//     cout << "get the hell out";

// }

// functions

// int add(int x, int y = 15) {

//     return x + y;

// }

// int main() {

//     cout << add(100);

// }


// Standar library

#include <string>


int main() {
    string text = "10";
    cout << stoi(text) + 105;
}
