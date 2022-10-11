/*
Understand about Array with pointers
*/

#include <iostream>
using namespace std;

int main(){
    int integer_array[5] = {1, 2, 3, 4, 5};
    cout << integer_array[1] << endl;
    cout << integer_array << endl; // inital addres of an array

    int *myp;
    myp = integer_array;
    cout << *myp << endl;
    myp++;  
    myp++;
    cout << *myp << endl;


}