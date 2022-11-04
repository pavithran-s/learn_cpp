// Queue works on FIFO first in first out
// Priority queue it won't put data in FIFO, the element which more prority which will be at the top
#include <iostream>
#include <queue>

using namespace std;


int main() {

    queue<int> myq;

    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);

    // remove first element that is 10
    myq.pop();

    // Iterating here is little different
    while(!myq.empty()) {
        cout << myq.front() << " ";
        myq.pop();
    }
    cout << endl;

    priority_queue<int> mypq;

    mypq.push(10);
    mypq.push(3);
    mypq.push(50);
    mypq.push(1);

    cout << "Priority queue" << endl;
    while(!mypq.empty()) {
        cout << mypq.top() << " ";
        mypq.pop();
    }
    cout << endl;

    return 0;
}