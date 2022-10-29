// Unique Smart Pointer - Unique Owner Ship
// Memory gets free as scope ends not the program
// We can't copy unique pointer. Copying of pointers creates most of the memory leaks

#include <iostream>
#include <memory>

using namespace std;

class User {
    public:
        User() {
            puts("Constructor ran successfully");
        }

        ~User() {
            puts("Destructor ran successfully");
        }

        void test_function() {
            cout << "Testing function" << endl;
        }
};

int main() {
    
    { // one scope
        // unique_ptr<User> sam(new User());    // Non-developer friendly because of the new keyword

        unique_ptr<User> sam = make_unique<User>(); // This is mostly used because of the new keyword not present

        // unique_ptr<User> Jhon = sam; // Unique pointer won't allow us to copy pointer

        sam->test_function();
    }
    cout << "End of the program" << endl;
    return 0;
}