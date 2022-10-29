#include <iostream>
#include <string>

using namespace std;

class User {
    int _secret = 22;

    public:
        string name = "default";
        void getName() {cout << "Your Name is " << name << endl;}
        void setSecret(const int &newsecret) {_secret = newsecret;}
        int getSecret(); // need to provide like this
};

// We can able to place below code in different file as well
// class_name ::(scope resolution operator) function name
int User::getSecret() { 
    return _secret;
}

int main() {
    User sam;
    sam.name = "Sam";
    sam.getName();
    sam.setSecret(121);
    cout << "Secret is " << sam.getSecret() << endl;

    return 0;
}