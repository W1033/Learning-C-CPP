#include <stdio.h>
#include <math.h>

int main() {
    /*
     * 根据海伦公式求三角形的面积
     *
     * 三角形三边分别为 a, b, c；三角形的半周长为 p，面积为 S
     * 
     * 存在公式定理如下：
     * p = (a + b + c) / 2
     * S = sqrt(p(p - a)(p - b)(p - c))
     */
    // int a, b, c;
    // double p = 0;
    // double S = 0;
    // printf("请输入三角形的三条边: \n");
    // scanf("%f %f %f", &a, &b, &c);
    // p = (a+b+c)/2;
    // S = sqrt(p*(p-a)*(p-b)*(p-c));
    // printf("三角形的面积为: %7.2f\n", S);
    // return 0;


    int x, y;
    printf("请输入 x 的值: ");
    scanf("%d", &x);
    if (x < 1) {
        y = x;
    }else if (x >= 1 && x < 10) {
        y = 2 * x - 1;
    }else if (x >= 10){
        y = 3 * x - 11;
    }
    printf("%d\n", y);
    return 0;
}