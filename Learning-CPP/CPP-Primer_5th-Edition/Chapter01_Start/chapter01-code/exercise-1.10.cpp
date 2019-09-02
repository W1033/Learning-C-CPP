#include <iostream>

// - 使用 递减运算符(--) 在循环中按递减顺序打印出 10 到 0 之间的整数。
int main() {
    int val = 10;
    while(val > 0) {
        --val;
        std::cout << "Decrement from 10 to 0 is: "
            << val << std::endl;
    }
    return 0;
}
