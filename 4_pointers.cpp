/*
Learn about pointers basics
*/

#include <iostream>

using namespace std;

int main() {
    int a = 10, *myp; // * initialize myp as pointer variable
    
    myp = &a; // & - reference a variable's memory location to the pointer

    cout << myp << endl;
    printf("%d\n", *myp);
    // *myp = 10;
    // printf("%d\n", *myp);
    return 0;
}