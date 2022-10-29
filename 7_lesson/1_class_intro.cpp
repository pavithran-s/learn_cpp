#include <iostream>
#include <string>

using namespace std;

class User {
    int secret = 22; // Default is a private class

    public:
        string name = "default";
        void getName() {cout << "Your Name is " << name << endl;}
};

int main() {
    User sam;
    sam.name = "Sam";
    sam.getName();

    return 0;
}