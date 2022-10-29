// Shared Pointer - Shared Ownership
// Memory gets free as scope ends not the program
// We can able to copy the pointer as many as we want

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class User {

    string _name;
    public:
        User(string name) {
            _name = name;
            puts(">>>>>>> Constructor ran successfully");
        }

        ~User() {
            puts(">>>>>>> Destructor ran successfully");
        }

        void test_function() {
            cout << "Testing function" << endl;
        }

        string getName() {return _name;}
};

int main() {
    
    { // one scope
        
        // shared_ptr<User> sam(new User("Sam")); // This also possible but not recomended

        shared_ptr<User> sam = make_shared<User>("Sam");
        
        shared_ptr<User> Jhon = sam; // Copying is allowded in shared pointer

        sam->test_function();

        cout << sam->getName() << endl;
        cout << Jhon->getName() << endl;
    }
    cout << "End of the program" << endl;
    return 0;
}