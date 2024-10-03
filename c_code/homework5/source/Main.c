#include <stdio.h>

int main() {
    int num1;
    int num2;

    // 讀取兩個整數
    printf("Please enter two integers: ");
    scanf("%d%d", &num1, &num2);

    // 判斷num1是不是可以被num2整除
    if (num1 % num2 == 0)
    {
        printf("%d is a multiple of %d\n", num1, num2);
    }
    else printf("%d is not a multiple of %d\n", num1, num2);

    return 0;
}
