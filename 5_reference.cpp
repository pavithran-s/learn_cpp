/*
Understanding of reference (&)
*/

#include <iostream>
using namespace std;

int main(){
    int val = 10;
    int &myrefernce = val;
    printf("%d %d\n", myrefernce, val);
    myrefernce = 30;
    printf("%d %d\n", myrefernce, val); 
}