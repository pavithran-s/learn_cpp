#include <iostream>

using namespace std;

int add(int a, int b) {
    cout << "Runnig add1" << endl;
    return a + b;
}

float add(float a, float b) {
    cout << "Runnig add2" << endl;
    return a + b;
}

int main() {
    int num1 = 5, num2 = 4;
    float num3 = 3.5, num4 = 4.4;
    
    cout << add(num1, num2) << endl;
    cout << add(num3, num4) << endl;

    return 0;
}