// friend keyword which will give access to the derived class for the private data members which is in the base class
// Not recommended to use friend keyword because it may cause some data issues
// Instead we can use getter
#include <iostream>
#include <string>

using namespace std;

// base class
class Man {
    string _name;
    int _age;
    Man() {}
    // Giving access of the private data members in the base class (Man) to the dervied class (Superman)
    friend class Superman;

    protected:
        Man(const string &name, const int & age): _name(name), _age(age) {}
        int getAge() const { return _age;}
    public:
        void getPower() const { puts("Run faster");} 
        string getName() const { return _name;}
};

// derived class 1
class Superman : public Man {
    string _extra_power;
    public:
        Superman(string name, string extra_power) : Man(name, 26) {
            _extra_power = extra_power;
        }
        void getPower() const { 
            puts("Laser from his eyes");
            // Accessing priate data member of the base class
            cout << "Age is " << _age << endl;
        }
};

// derived class 2
class Spiderman : public Man {
    string _extra_power;
    public:
        Spiderman(string name, string extra_power) : Man(name, 19) {
            _extra_power = extra_power;
        }
        void getPower() const {
            puts("He will swing in the sky using spider web");
            // Can't able to execute below line because Spiderman class (Derived class) is not friend with Man (Base class)
            // cout << "Age is " << _age << endl;
        }
};

int main() {

    Spiderman Peter("Peter", "webbing");
    cout << Peter.getName() << endl;
    Peter.getPower();

    Superman Nick("Nick", "run-fast");
    cout << Nick.getName() << endl;
    Nick.getPower();


    return 0;
}