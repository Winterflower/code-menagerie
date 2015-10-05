//Fruit class with params
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


class Fruit {
    public:
        void printNameOfFruit( string nameOfFruit ){
            cout << "The name of this fruit is " << nameOfFruit << endl;
        }
};

int main(){
    Fruit apple;
    string fruitName;

    cout << "Please enter a fruit name" << endl;
    getline(cin, fruitName);
    apple.printNameOfFruit(fruitName);

}

