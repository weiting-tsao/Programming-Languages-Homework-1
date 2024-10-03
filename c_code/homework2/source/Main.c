#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;

    // 讀取三個整數
    printf("Please enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // 初始化 max 和 min
    max = num1;
    min = num1;

    // 找到最大值
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // 找到最小值
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    // 列印結果
    printf("maximum value: %d\n", max);
    printf("minimum value: %d\n", min);

    return 0;
}
