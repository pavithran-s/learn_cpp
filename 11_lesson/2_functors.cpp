// Functors is like defining of a class with () operator overloading so that we can able to create the object which look like a function


#include <iostream>

using namespace std;

// A functor
class addFloat {
    float ft;

    public:
        addFloat() {
            ft = 0.2;
        }

        float getValue() {return ft;}

        // overloading paranthesis
        template <typename T>
        void operator ()(T val){
            ft += val;
        }
};

int main() {

    addFloat floaty;
    cout << floaty.getValue() << endl;
    
    // In some case we need to call methods without traditional like floaty.add(0.5)
    // instead we want to call like floaty(0.5) and its need to perform addition
    // for that we need to overload paranthesis and that class is called as functors
    floaty(0.5);
    cout << floaty.getValue() << endl;

    floaty(1);
    cout << floaty.getValue() << endl;
    return 0;
}