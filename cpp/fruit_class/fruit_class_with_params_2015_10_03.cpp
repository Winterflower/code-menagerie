//Fruit class, which accepts the name of the Fruit as a parameter

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class Fruit {
    public:
        void displayFruitName( string fruitName ){
            cout << "The name of this fruit is " << fruitName << endl;
        }
};

int main(){
    Fruit namedFruit;
    string fruitName;

    cout << "Please enter the name of the fruit" << endl;
    getline(cin, fruitName);
    cout << endl;

    namedFruit.displayFruitName(fruitName);
    return 0;
}

