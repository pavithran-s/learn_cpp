#include <iostream>
#include <string>

using namespace std;


int main() {

    // Lambda syntax
    // Lambda is also like a function but without function name
    // [] for mentioning it as lambda {} is the scop where we going to put our code () is the function calling
    []{}();

    []{cout << "First Lambda" << endl;}();

    // returning only 1 need to check
    auto val = [](){return 56;};
    cout << "Value got from Lambda is " << val << endl;

    auto sum = [](auto a, auto b){return a + b;};

    cout << sum(10, 10) << endl;
    cout << sum(1.4, 2.30) << endl;

    string k = "pavi";
    string l = "thran";
    cout << sum(k, l) << endl;
    
    return 0;
}