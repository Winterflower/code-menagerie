//A program to compare two user generated numbers

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){
    int number1;
    int number2;
    cout << "Please enter two integers of your choice";
    cin >> number1 >> number2;

    if (number1>number2){
        cout << number1 << " > " << number2 << endl;;
    }
    
    if (number1==number2){
        cout << number1 << " == " << number2 << endl;
    }

    if(number1<number2){
        cout << number1 << " < " << number2 << endl;
    }

    return 0;
}
