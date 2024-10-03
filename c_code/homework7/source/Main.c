#include <stdio.h>

int main() {

    // 列印title  \t是製表符有tab的作用
    printf("number\tsquare\tcube\n");

    // 使用迴圈計算 0 到 10 的平方和立方
    for (int i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
