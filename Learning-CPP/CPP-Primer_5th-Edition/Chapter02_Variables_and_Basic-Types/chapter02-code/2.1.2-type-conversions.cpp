#include <iostream>
#include <string>

// - 2.1.2 类型转换 (带符号类型 —— 无符号类型)
int main() {
    bool b = 42;
    // - 当我们把一个非布尔类型的算术值赋给布尔类型时，初始值为 0 则结果
    //   是 false, 否则结果为 true
    std::cout << "b: " << b << std::endl;   // b: true

    // - 当我们把一个布尔值赋值给非布尔值时，初始值为 false 则结果为 0
    //   ，初始值为 true 则结果为 1.
    int i = b;
    std::cout << "i first:" << i << std::endl;  // i first:1

    i = 3.14;   // - i 的值为 3
    // i:3
    std::cout << "i:" << i << std::endl;

    double pi = i;  // - pi 的值是 3.0
    // - 当把一个整数值赋值给浮点类型时，小数部分记为 0。如果该整数所占的空间
    //   超过了浮点类型的容量，精度可能有损失。
    std::cout << "double pi:" << i << std::endl;

    // - 当我们赋值给无符号类型一个超出它表示范围的值时，结果是 "初始值对无符号
    //   类型表示数值总数取模后的余数。" (Q: 如何取模？)
    // - 例如: 8 bit 大小的 unsigned char 可以表示为 0 - 255 区间的值，如果
    //   我们赋值了一个区间外的值，则实际的结果是该值对 256 取模后所得的余数。因
    //   此，把 -1 赋给 8 比特大小的 unsigned char 所得到的结果是 255.
    unsigned char c = -1;
    std::cout << "unsigned char c:" << c << std::endl;


    signed char c2 = 256;
    std::cout << "signed char c2:" << c2 << std::endl;


    // ---------
    char aa = 'a';
    std::cout << "aa:" << aa << std::endl;
    // aa:a
    std::string str = "Hello World!";
    // string str:Hello World!
    std::cout << "string str:" << str << std::endl;


    return 0;
}