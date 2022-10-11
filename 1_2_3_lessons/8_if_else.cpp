/*
Understand about if, if-else, else if  and ternary operator
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a==1)
    {
        printf("Number is one\n");
    } 
    else if (a==2)
    {
        printf("Number is two\n");
    }
    else if (a==3)
    {
        printf("Number is three\n");
    }
    else
    {
        printf("Enter number between 1 to 3\n");
    }
    printf("Enter number is 1: %s\n", (a==1)? "true":"false");
}


// condition ? block 1 : block 2

