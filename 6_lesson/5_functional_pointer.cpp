#include <iostream>

using namespace std;

void sayHI() {
    puts("Hai!!");
}

int main() {

    // Functional pointer is a pointer that points the function
    // functional_pointer is the pointer that points to the function sayHI
    // round brackets at the end of sayHI is ignored because we don't wnat to run it, we want to assign the function
    // And before (*functional_pointer) there is an () its same like creating a new function

    void (*functional_pointer)() = sayHI;

    // one way to run the functional pointer
    functional_pointer();

    // second way
    (*functional_pointer)();

    return 0;
}