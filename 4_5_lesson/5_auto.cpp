#include <iostream>
#include <string>
using namespace std;

string api_call() {
    return "Got string result from API";
}

int another_call() {
    return 5;
}

int main() {
    string response = api_call();
    cout << response << endl;

    // Above we used string data type because we know the type of return data.
    // Assume that we don't know the return datatype in that place we can use auto

    auto unknown_response = another_call();
    cout << unknown_response << endl;

    if(typeid(unknown_response) == typeid(int)) {
        cout << "Both datatypes are same" << endl;
    }
    /*
    From the result of the above if statement,
    We can able to get that auto is not a data-type its just a keyword
    that assigns the correct data-type to the unknown type of data    
    */

    return 0;
}