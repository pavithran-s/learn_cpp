#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {

    vector <int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : numbers) {
        cout << i << " ";
    }
    cout << endl;

    // This algorithm partition the iterators based on provided lambda function
    // It works on the O(n) complexity
    partition(numbers.begin(), numbers.end(), [](auto x){return x%2 == 0;});

    for (int i : numbers) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
