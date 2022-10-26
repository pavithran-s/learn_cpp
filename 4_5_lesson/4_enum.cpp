// Enum is the best alternative for pre-processor constants

#include <iostream>
#define PI 3.14; //Pre-processor constant

using namespace std;

enum Styles {
    BOLD=5,     // without assignment enum always starts from 0 and next value is incremented by one
    ITALICS=1,  // By assigning some value, next enum will be incremented by 1 on the assigned value
    UNDERLINE
};

int main() {
    // cout << PI;
    cout << BOLD << endl;
    cout << ITALICS << endl;
    cout << UNDERLINE << endl;

    return 0;
}
