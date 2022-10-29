#include <iostream>
#include <string>

using namespace std;

class Money {
    public:
        void got_money() {puts("Got the Money");}
};

class Man {
    string _name;
    int _age;
    Man() {}

    protected:
        Man(const string &name, const int & age): _name(name), _age(age) {}
        int getAge() const { return _age;}
    public:
        void getPower() const { puts("Run faster");} 
        string getName() const { return _name;}
};

class Superman : public Man {
    string _extra_power;
    public:
        Superman(string name, string extra_power) : Man(name, 26) {
            _extra_power = extra_power;
        }
        void getPower() const {
            puts("Laser from his eyes");
        }
};

// Spiderman inherite from Man and Money class
// Called Multiple inheritance
class Spiderman : public Man, public Money {
    string _extra_power;
    public:
        Spiderman(string name, string extra_power) : Man(name, 19) {
            _extra_power = extra_power;
        }
        void getPower() const {
            puts("He will swing in the sky using spider web");
        }
};

int main() {

    Spiderman Peter("Peter", "webbing");
    cout << Peter.getName() << endl;
    Peter.getPower();
    //Able to access Money class's method
    Peter.got_money();

    Superman Nick("Nick", "run-fast");
    cout << Nick.getName() << endl;
    Nick.getPower();


    return 0;
}