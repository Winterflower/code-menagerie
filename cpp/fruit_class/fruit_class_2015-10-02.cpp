//Fruit Class in C++ on 2nd October, 2015

#include <iostream>
using std::cout;
using std::endl;

class Fruit {

    public:
        void printClassInformation(){
            cout << "This is the Fruit class" << endl;
        }
};


int main(){
    Fruit sampleFruit; //create the Fruit object... hmm seems very different to Java
    sampleFruit.printClassInformation();
    return 0;
}

