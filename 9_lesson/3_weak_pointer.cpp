// Weak Pointer - No Ownership
// It will keep count how many shared pointer is created.

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
        
        
        shared_ptr<User> sam = make_shared<User>("Sam");
        
        weak_ptr<User> wsam = sam; // This also pointing to the same pointer
        shared_ptr<User> Jhon = sam;
        
        // shared_ptr<User> Jhon(sam); // This also possible

        sam->test_function();

        cout << sam->getName() << endl;
        cout << Jhon->getName() << endl;

        cout << "Count: "<< wsam.use_count() << endl;

        shared_ptr<User> shared_sam = wsam.lock();  // Converting weak pointer into shared like 
                                                    // sam(shared pointer) > wsam (weak pointer) > shared_sam(shared pointer)
        cout << "Count: "<< wsam.use_count() << endl;   // Count is incremented because of new shared variable is created of the same pointer

        // cout << wsam->getName() << endl; // Can't able to use because weak pointer is only to manage shared pointer
        // wsam->test_function();

    }
    cout << "End of the program" << endl;
    return 0;
}