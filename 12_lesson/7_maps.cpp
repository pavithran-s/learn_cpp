
#include <iostream>
#include <map>

using namespace std;


int main() {
    map<string, int> myMap;

    myMap.insert(make_pair("a", 1));
    myMap["b"] = 2;
    

    for (auto dict: myMap) {
        cout << dict.first << " " << dict.second << endl;
    }

    return 0;
}