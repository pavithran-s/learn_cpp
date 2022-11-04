// Stack is LIFO Last in first out

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> mys;

    mys.push(10);
    mys.push(20);
    mys.push(30);
    mys.push(40);

    cout << mys.top() << endl;
    mys.pop();
    cout << mys.top() << endl;

    while(! mys.empty()) {
        cout << mys.top() << " ";
        mys.pop();
    } 
    cout << endl;

    return 0;
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