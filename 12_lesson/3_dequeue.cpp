// Deque has an ability to push/pop on front and back as well
// Deque also won't store data in continous memory

#include <iostream>
#include <deque>

using namespace std;


int main() {
    deque <int> mydq;

    mydq.push_back(10);
    mydq.push_back(20);
    mydq.push_front(30);
    mydq.push_front(40);
    mydq.push_front(50);


    for (auto i : mydq) {
        cout << i << " ";
    }
    cout << endl;

    mydq.pop_back();

    for (auto i : mydq) {
        cout << i << " ";
    }
    cout << endl;

    mydq.pop_front();

    for (auto i : mydq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
