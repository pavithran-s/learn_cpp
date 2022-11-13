// ABSTRACT CLASS
// A class with pure virtual function then it is called as Abstract class

// PURE VIRTUAL FUNCTION
// Pure virtual function need to start with virtual keyword and ends with (=0)
// Pure virtual function won't have any defenition in it.

// CHARACTERSTICS OF ABSTRACT CLASS
/*
Abstract class cann't be instantiated (cann't able to create object from it) 
but pointer and reference can be created
*/
/*
It is used mainly as main class so that derived class can uise it as interface
*/



#include <iostream>

// Abstract class
class DataBase {
    public:
        // Pure virtual function
        virtual void get_Name() = 0;
};

class Manager : public DataBase {
    public:
        void get_Name() {
            std::cout << "Manager Class" << std::endl;
        }

};

class User : public DataBase {
    public:
        void get_Name() {
            std::cout << "User Class" << std::endl;
        }

};
int main() {
    // DataBase a; // Object can't be created from the abstract class

    DataBase *p;

    Manager manager1;
    p = &manager1;

    p -> get_Name();

    User user1;
    p = &user1;

    p -> get_Name();
    user1.get_Name();

    return 0;
}
