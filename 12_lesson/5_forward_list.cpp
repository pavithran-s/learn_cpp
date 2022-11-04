
// Forward list push and pop the data only in front
#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl;

    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);
    fl.push_front(40);

    cout << fl.front() << endl;

    fl.pop_front();

    cout << fl.front() << endl;

    for(auto i: fl) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}