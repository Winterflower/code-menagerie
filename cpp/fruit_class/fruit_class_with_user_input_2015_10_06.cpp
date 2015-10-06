// Fruit class with a method that takes user input

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;


class Fruit {
    public:
        void printNameOfFruit(){
            string name;
            name = getFruitName();
            cout << "The name of the fruit is " << name <<endl;
        }
    private:
        string getFruitName(){
            string tempFruitName;
            cout << "Please enter fruit name: " << endl;
            getline(cin, tempFruitName);
            return tempFruitName;
        }

};

int main(){
    Fruit appleFruit;
    appleFruit.printNameOfFruit();
}

