//What happens if the initialised parameter is called before the line is read
//from cin?

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
    Fruit appleFruit;
    string fruitName;

    cout << "Call displayFruitName before the variable contains anything " << endl;
    appleFruit.displayFruitName(fruitName);
    cout << endl;
    cout << "Please enter a name for the fruit " << endl;
    getline(cin, fruitName);
    cout << "Call displayFruitName after the variable has been initialised" << endl;
    appleFruit.displayFruitName(fruitName);
}

