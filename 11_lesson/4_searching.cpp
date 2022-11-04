#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    int arr[6] = {4, 1, 6, 3, 8, 0};
    // float arr[6] = {4.3, 1.6, 6.2, 3.8, 8.4, 0};

    cout << "Unsorted Array" << endl;
    for(int n: arr) {
        cout << n << " ";
    }
    cout << endl;
    
    sort(arr, arr+6);

    cout << "Sorted Array:" << endl;
    for(int n: arr) {
        cout << n << " ";
    }
    cout << endl;
    
    // binary search is done after an sorted array
    if(binary_search(arr, arr+6, 6)) {
        cout << "Number Found" << endl;
    } else {
        cout << "Number Not Found" << endl;
    }

    return 0;
}