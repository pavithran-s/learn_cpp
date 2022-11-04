// Sets won't allow repetation and it sort in ascending or deceinding order
// multiset allow repetation

#include <iostream>
#include <set>

using namespace std;

class Points {
    public:
        string name;
        int age;
    // This overwrite function needs to return bool data-type
    // It need to menion with const qualifier because there is not going to any change in the data member
    bool operator < (const Points &u) const { return age < u.age; };
    bool operator > (const Points &u) const { return age > u.age; };
};

int main() {
    
    set <int> myset = {4, 2, 8, 2, 1, 8, 3, 1};
    
    // greater<> display the set in decending order
    // set <int, greater<>> myset = {4, 2, 8, 2, 1, 8, 3, 1};
    // set <int, less<>> myset = {4, 2, 8, 2, 1, 8, 3, 1};
    
    // multiset <int> myset = {4, 2, 8, 2, 1, 8, 3, 1};

    myset.insert(10);

    for (auto i: myset) {
        cout << i << " ";
    }
    cout << endl;

    for (const auto &i: myset) {
        cout << i << " ";
    }
    cout << endl;

    // For custom data-type we need to overwrite two operator that is < and >
    set <Points> myset1 = {{"sam", 12}, {"ram", 30}, {"sam", 12}};

    for (const auto &i: myset1) {
        cout << i.name << " ";
    }
    cout << endl;
    
    
    return 0;
}