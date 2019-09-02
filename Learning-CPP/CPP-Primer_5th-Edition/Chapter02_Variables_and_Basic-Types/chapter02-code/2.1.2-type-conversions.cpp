#include <iostream>

int main() {
    // - b 为 真
    bool b = 42;
    // b: 1
    std::cout << "b: " << b << std::endl;

    int i = b;
    i = 3.14;

    double pi = i;

    unsigned char c = -1;

    signed char c2 = 256;

    return 0;
}