#include <iostream>
#include <string>

using namespace std;

int getvalue() {
    return 5;
}

void setvalue(int &a) {

}

void setvalue1(const int &a) {

}

int main() {
    int a = 10; // a is lvalue 10 is rvalue
    // RULE: 1 - can't assign something to rvalue
    // 10 = a;

    int i = a; // i is lvalue r is also a lvalue

    string frstName = "Pavithran"; // frstName is lvalue and 'Pavithran' is rvalue
    string lastName = "Selvakumar";
    string fullName = frstName + lastName; // fullName is lvalue and frstName + lastName is also rvalue

    int d = getvalue(); // k is l value getvalue() is rvalue
    // getvalue() = k is not possible because of rvalue

    //RULE: 2 - can't assign lvalue reference with rvalue
    // Need to assign lvalue reference with lvalue
    // int &k = 10; // Not posiible &k is lvalue reference 10 is rvalue
    
    int c = 10; 
    int &k = c; // &k lvalue reference c is lvalue 

    // setvalue(10)  // its like int &a = 10
    // RULE: 3: By mentioning as const on lvalue reference it accepts both lvalue and rvalue
    const int &l = 10;
    setvalue1(10);
    setvalue1(c);

    // RULE: 4 : Can't assign rvalue reference with lvalue 
    // Need to assign rvalue reference with rvalue
    int && m = 10; // is possible && k is rvalue reference
    // int && k = c; // is not possible

    return 0;
}