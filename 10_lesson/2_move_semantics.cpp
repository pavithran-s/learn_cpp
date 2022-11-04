// Need to learn more https://www.youtube.com/watch?v=ehMg6zvXuMY
#include <iostream>

using namespace std;

// Normal swap function is using temp variable and performining copying
int swap1(int &v1, int &v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

// Using move semantics we are using temp variable but we are not copying it instead we are performing moving
int swap2(int &v1, int &v2) {
    int temp = move(v1);
    v1 = move(v2);
    v2 = move(temp);
}

int main() {

    int sv1, sv2, v1 = 10, v2 = 20;
    
    cout << "Original data before swap" << endl;
    cout << v1 << " " << v2 << endl;

    swap1(v1, v2);
    cout << "Performing swap" << endl;
    cout << v1 << " " << v2 << endl;

    swap2(v1, v2);
    cout << "Performing swap again" << endl;
    cout << v1 << " " << v2 << endl;

    return 0;
}