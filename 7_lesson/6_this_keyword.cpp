// Whenever we want to refer overself this keyword will be used

#include <iostream>
using namespace std;

class Rectangle {
    double _length;
    double _breadth;

    public:
        Rectangle(double l=0.0, double b=0.0) : _length(l), _breadth(b) {}

        double Area() {
            return _length * _breadth;
        }

        int compare(Rectangle rectangle) {
            return this->Area() < rectangle.Area(); // this keyword refrencing the h1 class (its own class)
        }
        

};

int main() {
    Rectangle h1(3.0, 3.0);
    Rectangle h2(4.0, 4.0);

    if(h1.compare(h2)) {
        puts("H1 is smaller");
    } else {
        puts("H2 is smaller");
    }

    return 0;
}