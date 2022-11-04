// https://www.geeksforgeeks.org/vector-in-cpp-stl/
#include <iostream>
#include <vector>

// Why we used struct instead pf class is because if a class doesn't have any methods 
// then declaring as struct is advicable
struct Corners {
    float a, b, c, d;
};

// Operator over-ridding
std::ostream& operator<<(std::ostream& stream, const Corners& corner){
    stream << corner.a << " "  << corner.b << " " << corner.c << " " << corner.d;
    return stream;
};

int main() {
    // inside <> we can able to give predefined data-types or our custome class type
    std::vector <int> inty;

    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);

    for (auto i = inty.begin(); i != inty.end(); ++i) {
        std::printf("%d\n", *i);
    }
    
    for (int i=0; i < inty.size(); ++i) {
        std::cout << inty.at(i) << std::endl;
    }

    // Creating vector for custome data object
    std::vector <Corners> corners;

    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});

    for (int i = 0; i < corners.size(); ++i) {
        std::cout << corners.at(i) << std::endl;
    }

    return 0;
}