#include <iostream>

// - 1.4.3 读取数量不定的输入数据

int main() {
    int sum = 0, value = 0;

    // - 输出运算符: `<<` . 输入运算符: `>>`
    std::cout << "Please enter numbers: " << std::endl;

    // - 读取数据直到遇到文件尾(书上说 mac 系统的文件结束符是 `ctrl + D`，但是在
    //   clion 输入却是结束当前程序，只有输入一个字母或别的非数字字符才可以结束当前检测流)，
    //   计算所有读入的值的和
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is : " << sum << std::endl;
    return 0;
}
