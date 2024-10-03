#include <stdio.h>

int main() {
    double weight, height, bmi;

    // 讀取使用者的體重和身高（公斤和公尺）
    printf("Please enter your weight (kg)： ");
    scanf("%f", &weight);
    printf("Please enter your height (meters)： ");
    scanf("%f", &height);

    // 計算BMI (公斤和公尺)
    bmi = weight / (height * height);
   

    // 根據BMI值顯示健康狀況
    if (bmi < 18.5) {
        printf("underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("normal weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("overweight\n");
    }
    else {
        printf("obese\n");
    }

    return 0;
}
