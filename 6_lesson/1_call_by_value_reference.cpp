#include <iostream>

using namespace std;

void call_by_value(int val) {
    ++val;
}

void call_by_reference_m1(int *ptr) {
    // cout << ptr << endl;
    ++(*ptr);
}

void call_by_reference_m2(int &ptr) {
    // cout << ptr << endl;
    ++(ptr);
}

int main() {

    int score=3;
    cout << "Call by value" << endl;
    cout << "Before calling " << score << endl;
    call_by_value(score);
    cout << "After Calling " << score << endl;

    cout << "Call by Reference (Method 1)" << endl;
    cout << "Before calling " << score << endl;
    call_by_reference_m1(&score);
    cout << "After Calling " << score << endl;

    score = 3;
    cout << "Call by Reference (Method 2)" << endl;
    cout << "Before calling " << score << endl;
    call_by_reference_m2(score);
    cout << "After Calling " << score << endl;

    return 0;
}