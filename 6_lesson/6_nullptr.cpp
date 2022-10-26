#include <iostream>

using namespace std;

void sayhi(int a) {
    printf("Hai integer %d\n", a);
}

void sayhi(double a) {
    printf("Hai double %f\n", a);
}

void sayhi(int *a) {
    printf("Hai pointer %p\n", a);
}

int main() {
    
    sayhi(nullptr);
    
    return 0;
}