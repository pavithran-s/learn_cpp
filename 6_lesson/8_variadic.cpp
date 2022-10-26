#include <iostream>

using namespace std;

template <typename T>
void func(T val) {
    cout << "One func " << val << endl;
}

template <typename T, typename... Args>
void func(T val, Args... args) {
    cout << "Two func " << val << endl;
    func(args...);
}

int main() {
    func("Hello");

    func(1, 1.2, 0, 44, "Hai!!");
    
    return 0;
}