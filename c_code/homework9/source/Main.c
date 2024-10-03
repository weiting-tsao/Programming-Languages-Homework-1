#include <stdio.h>

int main() {

    double totalMiles, costPerGallon, averageMilesPerGallon;
    double dailyParkingFee, dailyTollFee, dailyDrivingCost;

    // 輸入每項數據
    printf("Enter the total number of miles you drive per day: ");//輸入您每天駕駛的總里程數
    scanf("%lf", &totalMiles);

    printf("Enter the cost per gallon of gasoline (USD): ");//輸入每加侖汽油的成本（美元）
    scanf("%lf", &costPerGallon);

    printf("Enter your average miles per gallon: ");//輸入每加侖的平均英里數
    scanf("%lf", &averageMilesPerGallon);

    printf("Enter daily parking fee (USD): ");//輸入每日停車費（美元）
    scanf("%lf", &dailyParkingFee);

    printf("Enter daily toll fee (USD): ");//輸入每日通行費（美元）
    scanf("%lf", &dailyTollFee);

    // 計算每日駕駛成本(總駕駛成本 = 燃油成本 + 停車費 + 通行費)
    dailyDrivingCost = (totalMiles / averageMilesPerGallon) * costPerGallon + dailyParkingFee + dailyTollFee;

    // 顯示結果花費多少錢
    printf("Your total cost of driving to work each day is: $%.2f\n", dailyDrivingCost);

    return 0;
}
