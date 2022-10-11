/*
Get first name and last name of the user
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string first_name, last_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Your name is " << first_name << " "<< last_name;
    return 0;
}
