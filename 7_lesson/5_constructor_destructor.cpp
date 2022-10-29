// See about rule of three
// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three
#include <iostream>
#include <string>

using namespace std;

class Phone {
    string _name;
    string _os;
    int _price;
    Phone();    // Declaring default constructor

    public:    
        Phone(const string& name, const string& os, const int& price);  // Declaration of Parameterised constructor
        Phone(const Phone &);   // Declaration of copy constructor
                                // We can able to ignore the argument name in this declaration but need to specify the data-type
        string getName() { return _name;}
        ~Phone();   // Destructor
                    // It is for de-allocating the allocated variable in the constructor

};

Phone::Phone() : _name("Empty"), _os("Empty"), _price(0) {
    puts("Default constructor is called");
}

Phone::Phone(const string& name, const string& os, const int& price) {
    _name = name;
    _os = os;
    _price = price;
    puts("Parameterised constructor is called");
}

Phone::Phone(const Phone& values) {
    _name = "new-" + values._name;
    _os = values._os;
    _price = values._price;
    puts("Copy constructor is called");
}

Phone::~Phone() {
    cout << "Destructor is called for the phone " << _name << endl;
}

int main() {
    /*
    // By Moving default constructor from public to private, then we can't able to access the default constructor below lines will throw an error.
    Phone test_phone;
    cout << test_phone.getName() << endl;
    */

    Phone OnePlus8("OnePlus8", "Oxygen", 799);
    cout << OnePlus8.getName() << endl;

    Phone Oneplus10 = OnePlus8;
    cout << Oneplus10.getName() << endl;

    return 0;
}