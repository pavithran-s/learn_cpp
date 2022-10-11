// Different way of usage of for loop

#include <iostream>
using namespace std;


int main() {
    char mystring[] = "pavi" ; // 0 is hidden in it
    char myname[] = {'p', 'a', 'v', 'i', 0};  //string always end up with 0

    for(int i = 0; myname[i] != 0; i++){
        cout << "Char is: " << myname[i] << endl;
    }

    cout << "<<<<<<< Break1" << endl;

    for(int i = 0; mystring[i] != 0; i++){
        cout << "Char is: " << myname[i] << endl;
    }

    cout << "<<<<<<< Break2" << endl;

    for(int i = 0; myname[i]; i++){
        cout << "Char is: " << myname[i] << endl;
    }

    cout << "<<<<<<< Break3" << endl;

    for(char *p=mystring; *p != 0; p ++){
        cout << "Char is: "<< *p << endl;
    }
    cout << "<<<<<<< Break4" << endl;

    for(char i:mystring) {
        if(i==0) break;
        cout << "Char is: " << i << endl;
    }
}