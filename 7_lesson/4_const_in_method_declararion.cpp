// https://stackoverflow.com/questions/751681/meaning-of-const-last-in-a-function-declaration-of-a-class
#include <iostream>
#include <string>

using namespace std;

class User {
    int _secret = 22;

    public:
        string name = "default";
        void getName() {cout << "Your Name is " << name << endl;}
        void setSecret(const int &newsecret) {_secret = newsecret;}
        int getSecret() const;  // const in the methods promises that its not changing any data members 
                                // We can't use const in above method because its changing the value of the data member
};

int User::getSecret() const {
    // _secret++; // This is not possible because of the const qualifier
    return _secret;
}

int main() {
    User sam; // Non-const object can able to access both const and non-const methods
    sam.name = "Sam";
    sam.getName();
    sam.setSecret(121);
    cout << "Secret is " << sam.getSecret() << endl;

    const User gowtham; // Const declared object can access only const methods
    cout << "Secret is " << gowtham.getSecret() << endl;


    return 0;
}