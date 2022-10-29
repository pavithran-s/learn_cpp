#include <iostream>
#include <string>

using namespace std;

// base class
class Man {
    string _name;
    int _age;
    Man() {}

    protected:
        Man(const string &name, const int & age): _name(name), _age(age) {}
        int getAge() const { return _age;} // methods inside protected can't able to access publically
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
        void getPower() const { // getPower() in the base class is over written by the derived class
            puts("Laser from his eyes");
        }
};

// derived class 2
class Spiderman : public Man {
    string _extra_power;
    public:
        Spiderman(string name, string extra_power) : Man(name, 19) {
            _extra_power = extra_power;
        }
        void getPower() const { // getPower() in the base class is over written by the derived class
            puts("He will swing in the sky using spider web");
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