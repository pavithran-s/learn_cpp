/*
Understanding of reference (&)
*/

#include <iostream>
using namespace std;

int main(){
    int num1 = 10;
    int num2 = 20;
    int &ref1 = num1; // Initialize refernce with num1 object whenever if we change ref1 it will reflect in num1 as well

    cout << ref1 << endl;
    ref1 = num2; // Assigning num2 value into num1, because ref1 is the reference of num1
    cout << ref1 << endl;

    // If we want to initialize ref with direct value

    // int &ref2 = 30;  Error >>> cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    const int &ref2 = 30; // we should need to put const
    // ref2 = 40; we can't able to change this value because it is a constant
    cout << ref2 << endl;
}   