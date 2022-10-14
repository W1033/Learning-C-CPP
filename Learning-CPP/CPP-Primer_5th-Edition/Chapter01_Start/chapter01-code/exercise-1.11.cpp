#include <iostream>

// - 编写程序，提示用户输入 2 个整数，打印出这 2 个整数所指定范围内的所有整数。

void print_range(int lo, int hi){
    if (lo > hi) {
        print_range(hi, lo);
        return;
    }
    while (lo <= hi) {
        std::cout << lo << std::endl;
        ++lo;
    }
}

int main() {
    int low, height;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> low >> height;

    print_range(low, height);

    return 0;
}
