#include <iostream>
#include <string>

using namespace std;

class User {
    int _secret = 22; // Default is a private class, Best practice is to use _ in front of private data member

    public:
        string name = "default";
        void getName() {cout << "Your Name is " << name << endl;}
        void setSecret(const int &newsecret) {_secret = newsecret;} // Setter sets the private data member values // For &newsecret check reference
        int getSecret() {return _secret;} // Getter gets the private data member values
};

int main() {
    User sam;
    sam.name = "Sam";
    sam.getName();
    sam.setSecret(121);
    cout << "Secret is " << sam.getSecret() << endl;

    return 0;
}