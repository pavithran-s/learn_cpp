#include <iostream>

using namespace std;


int getNum() {
    static int num = 5;
    return num = num + 1;
}

int main() {
    
    int num = 2;
    cout << num << endl;

    num = getNum();
    cout << num << endl;

    num = getNum();
    cout << num << endl;

    return 0;
}