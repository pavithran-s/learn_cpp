#include <iostream>

using namespace std;


// Function Overloading
/*
int add(int a, int b) {
    cout << "Runnig add1" << endl;
    return a + b;
}

float add(float a, float b) {
    cout << "Runnig add2" << endl;
    return a + b;
}
*/

// templates
// By using template we can able to create our own data-type

template<typename common_dtype>

common_dtype add(common_dtype a, common_dtype b) {
    cout << "Runnig add" << endl;
    return a + b;
}

int main() {
    int num1 = 5, num2 = 4;
    float num3 = 3.5, num4 = 4.4;
    
    cout << add(num1, num2) << endl;
    cout << add(num3, num4) << endl;

    return 0;
}