#include <iostream>

using namespace std;

// Below code is the sample of Generic programming because inside the program we don't care about data types
template <typename T>
T getBigger(T a, T b) {
    return (a < b) ? b : a;
}

int main() {
    cout << getBigger(10, 5) << endl;
    return 0;
}