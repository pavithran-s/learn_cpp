#include <iostream>

using namespace std;


int main() {
    int val = 2;
    // float val = 2.0;
    // char val = 'a';

    try {
        cout << "Inside try block\n";
        throw val;
        cout << "Code after throw won't work\n";
    } catch(int x) {
        cout << "Integer Exception handled\n";
    } catch(float y) {
        cout << "Float Exception handled\n";
    } catch(...) {
        cout << "Default exception handled\n";
    }

    cout << "Outside try catch block\n";
}