#include <iostream>

// - 编写程序，从 cin 读取一组数，输出其和。

int main() {
    int sum = 0, value;
    std::cout << "Please enter some numbers: " << std::endl;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "The sum of input numbers is : " << sum << std::endl;
    return 0;
}
