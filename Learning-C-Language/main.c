#include <stdio.h>


// - 定义一个转换函数, 参数只接受字符串
char translate(char s) {
    return s + 4;
};

int main() {
    // char name[100];
    // printf("What is your name?\n");
    // scanf("%s", name);
    // printf("Hello,%s, nice to meet you!\n", name);

    // - 声明 5 个变量并赋值
    char c1, c2, c3, c4, c5;
    c1 = 'C'; 
    c2 = 'h';
    c3 = 'i';
    c4 = 'n';
    c5 = 'a';
    // - 输出源代码
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    putchar('\n');

    // - 按题目要求加密
    c1 = c1 + 4;
    c2 = c2 + 4;
    c3 = c3 + 4;
    c4 = c4 + 4;
    c5 = c5 + 4;
    printf("c1 = %c, c2 = %c, c3 = %c, c4 = %c, c5 = %c", c1, c2, c3, c4, c5);
    return 0;
}