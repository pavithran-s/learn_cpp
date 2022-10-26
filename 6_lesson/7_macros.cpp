#include <iostream>

#define CUSINT int32_t  // Good practice. If we want to change the bit version and we can change that by few changes.
#define end return 0
#define console_log(a) std::cout << a << std::endl   // Not the good practice

// Macros will replace the defined keyword with what we initialized at the time of compiling

int main() {
    std::cout << "Hello\n";
    console_log(10);
    end;
}