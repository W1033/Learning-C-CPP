#include <iostream>

// - 1.4.4 —— if 语句

int main() {
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        // - cnt: consecutive times 连续出现的次数
        // - store the count for the current value we're processing
        in cnt = 1;
        // - read the remaining numbers
        while (std::cin >> val) {
            // - if the values are the same
            if (val == currVal) {
                // - add 1 to cnt
                ++cnt;
            } else {
                // - otherwise, print the count for the previous value
                std::cout << currVal << " occurs "
                          << cnt << " times " << std::endl;
            }
        }
        // - remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << cnt << " times " << std:: endl;
    }

}
