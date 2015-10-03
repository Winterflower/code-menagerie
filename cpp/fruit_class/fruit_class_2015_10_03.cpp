// Practice creating classes with C++ on Oct 3rd, 2015

#include <iostream>

using std::cout;
using std::endl;


class Fruit {

    public:
        void printNameOfFruit(){
            cout << "This is a Fruit class" << endl;
        }
};

int main(){
    Fruit appleFruit;
    appleFruit.printNameOfFruit();
}


