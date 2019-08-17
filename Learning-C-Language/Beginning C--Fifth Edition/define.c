#include <stdio.h>

// 符号常量: 用标识符代表一个常量，称为符号常量。
// 使用符号常量的好处: 1.含义清晰； 2.能做到 "一改全改"
#define PRICE 30;

void main() {
    // 符号常量与变量不同，它的值在其作用域内不能改变，也不能在被赋值。
    int num, total;
    num = 10;
    total = num * PRICE;
    // output: total= 300
    printf("total= %d", total);
}