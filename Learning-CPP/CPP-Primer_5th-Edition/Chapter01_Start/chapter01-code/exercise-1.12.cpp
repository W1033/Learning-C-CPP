#include <iostream>

// - 下面的 for 循环完成了什么功能？sum 的终值是多少？

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    // - 输出运算符: `<<` . 输入运算符: `>>`
    // 0
    std::cout << sum << std::endl;
}
