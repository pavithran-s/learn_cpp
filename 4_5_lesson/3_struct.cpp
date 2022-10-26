#include <iostream>

using namespace std;

struct User {
    const int uID;
    const char *name; //Const is only for pointer and not for its values
    int mark;
};  // Ends with semi-colon

int main() {

    User rahul = {1, "Rahul", 90};
    User naveen = {2, "Naveen", 99};
    
    cout << rahul.name << endl;

    // We can able to change the pointer value eventhough it is declared as an constant
    rahul.name = "Raahul";
    cout << rahul.name << endl;

    //We can't able to change values of the normal variable
    // rahul.uID = 10;

    User *naveen_pointer = &naveen;
    
    cout << naveen.mark << endl;
    naveen_pointer->mark = 10;
    cout << naveen_pointer->mark << endl;
    cout << naveen.mark << endl;

    return 0;
}