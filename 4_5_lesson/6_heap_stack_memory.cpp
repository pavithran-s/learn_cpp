#include <iostream>

using namespace std;

struct User{
    int id;
    int age;

    User() : id(10), age(25) {}
};

int main() {

    // Stack
    User rahul;
    int score = 20;

    //Heap
    // mew keywrd is to create memory mamually

    int *heap_score = new int;
    *heap_score = 200;

    User *vikram = new User();

    // If we created variable using new we should need to delete those variables
    delete vikram;

    return 0;
}