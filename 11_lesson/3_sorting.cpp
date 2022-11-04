#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    // Below is an array and also called as an iterator
    // things can be able to iterate through for loop is called as iterator
    int arr[6] = {4, 1, 6, 3, 8, 0};
    // float arr[6] = {4.3, 1.6, 6.2, 3.8, 8.4, 0};

    cout << "Unsorted Array" << endl;
    for(int n: arr) {
        cout << n << " ";
    }
    cout << endl;
    
    // arr can be int or float sort() in STL  won't care about data-types
    // so this also comes under STL and generic programming
    sort(arr, arr+6);
    // default sort algo is quick sort but above some threshold it will change to heap sort
    // There is a problem in heap sort so that I need to explore DSA

    // sort_heap(arr, arr+6);

    cout << "Sorted Array:" << endl;
    for(int n: arr) {
        cout << n << " ";
    }
    cout << endl;
    

    return 0;
}