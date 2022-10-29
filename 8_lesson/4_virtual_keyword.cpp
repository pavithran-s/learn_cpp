// Virual keyword tells the control that whenever the class is derived from its own class, then run the methods in the derived class if both the methods are overloaded.
#include <iostream>

using namespace std;

class One {
    public:
        // Try to run commanded line
        virtual void intro() {
        // void intro() {
            puts("I am One");
        }
};

class Two: public One {
    public:
        void intro() {
            puts("I am Two");
        }
};

class Three: public One {
    public:
        void intro() {
            puts("I am Three");
        }
};

int main() {
    One *a;
    Two b;
    Three c;

    b.intro();
    c.intro();
    puts("<<<<<>>>>>");

    a = &b;
    a->intro();
    
    a = &c;
    a->intro();

    
    return 0;
}