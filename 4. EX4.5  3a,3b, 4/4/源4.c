#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
    int year, weight;
    int weightClass;
    float fee;

    // 输入汽车年份和重量
    printf("请输入汽车的生产年份: ");
    scanf("%d", &year);
    printf("请输入汽车的重量(磅): ");
    scanf("%d", &weight);

    // 根据年份和重量确定重量等级和费用
    if (year <= 1970) {
        if (weight < 2700) {
            weightClass = 1;
            fee = 16.50;
        }
        else if (weight <= 3800) {
            weightClass = 2;
            fee = 25.50;
        }
        else {
            weightClass = 3;
            fee = 46.50;
        }
    }
    else if (year <= 1979) {
        if (weight < 2700) {
            weightClass = 4;
            fee = 27.00;
        }
        else if (weight <= 3800) {
            weightClass = 5;
            fee = 30.50;
        }
        else {
            weightClass = 6;
            fee = 52.50;
        }
    }
    else { // 1980年或以后
        if (weight < 3500) {
            weightClass = 7;
            fee = 35.50;
        }
        else {
            weightClass = 8;
            fee = 65.50;
        }
    }

    // 输出结果
    printf("\n=== 注册费用计算结果 ===\n");
    printf("生产年份: %d年\n", year);
    printf("汽车重量: %d磅\n", weight);
    printf("重量等级: %d\n", weightClass);
    printf("注册费用: $%.2f\n", fee);

    getchar(); // 等待用户输入任意字符以退出程序
    getchar();
    return 0;
}