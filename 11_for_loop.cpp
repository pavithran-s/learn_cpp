#include <iostream>

using namespace std;

int main() {
    int num[] = {1,2,3,4};

    // usual for loop
    for(int i = 0; i<4; i++) {
        cout << num[i] << endl;
    }

    cout << endl;
    // for each loop
    for(int i:num){
        cout << i << endl;
    }


    return 0;
}