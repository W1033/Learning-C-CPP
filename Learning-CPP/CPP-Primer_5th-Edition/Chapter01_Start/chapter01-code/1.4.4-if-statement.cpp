#include <iostream>

// - 1.4.4 —— if 语句

int main() {
    // - currVal is the number we're counting; we'll read new values into val.
    //   currVal 是我们正在统计的数，我们将读入的新值存到 val
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        // - cnt: consecutive times.  cnt: 连续出现的次数
        // - store the count for the current value we're processing
        //   保存我们正在处理的当前值的个数
        int cnt = 1;
        // - read the remaining numbers. 读取剩余的数
        while (std::cin >> val) {
            // - if the values are the same. 如果值相同
            if (val == currVal) {
                // - add 1 to cnt.  将 cnt 加 1
                ++cnt;
            } else {
                // - otherwise, print the count for the previous value
                //   否则，打印一个值的个数
                std::cout << currVal << " occurs "
                          << cnt << " times " << std::endl;
                // - 记住新值
                currVal = val;
                // - 重置计数器
                cnt = 1;
            }
        }
        // - remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << cnt << " times " << std:: endl;
    }

}
