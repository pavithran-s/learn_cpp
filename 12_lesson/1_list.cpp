// List stores data in un-conditional memory but vectors stores data in continous memory
// In list traversing is expensive but adding or removing element is very simple

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    
    // we can able to give custom data-type as well
    list<int> numbers;

    for(int i=0; i<10; ++i) {
        numbers.push_back(i);
    }

    // auto data-type is needed
    for(auto i = numbers.begin(); i != numbers.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    cout << numbers.front() << endl;
    numbers.pop_front();

    // REVERSE and SORT on custome data may cause few problems
    numbers.reverse();
    numbers.sort();

    for(auto i: numbers) {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}