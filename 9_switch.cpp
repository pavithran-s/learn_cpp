/*
Understanding switch statement
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    switch(a){
        case 1:
            printf("Number is one\n");
            break;
        case 2:
            printf("Number is Two\n");
            break;
        case 3:
            printf("Number is three\n");
            break;
        default:
            printf("Please enter between 1 and 3\n");
            break;
    }
}