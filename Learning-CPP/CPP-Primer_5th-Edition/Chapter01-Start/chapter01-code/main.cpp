#include <iostream>

int main() {
    //    std::cout << "Enter two numbers:" << std::endl;
    //    int v1 = 0, v2 = 0;
    //    std::cin >> v1 >> v2;
    //    std::cout << "The sum of " << v1 << " and " << v2 << " is "
    //        << v1 + v2 << std::endl;
    //    return 0;

    // - 1.4.1 while 语句
    int sum = 0, val = 1;
    while( val <= 10) {
        sum += val;
        ++val;
    }
    // Sum of 1 to 10 inclusive is 55
    std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;
    return 0;
}