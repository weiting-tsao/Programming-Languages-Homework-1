#include <stdio.h>

int main() {
    int num1;

    // 讀取一個整數
    printf("Please enter an integers: ");
    scanf("%d", &num1);

    // 判斷是否是偶數
    if (num1 % 2 == 0)
    {
        printf("%d is an even number\n", num1);
    }
    else printf("%d is an odd number\n", num1);

    return 0;
}
