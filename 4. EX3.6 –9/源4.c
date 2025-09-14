#include <stdio.h>
#include <math.h>

int main() {
    float initial_height = 2.0; // 初始高度2.0米
    float g_earth = 9.81;      // 地球重力加速度
    float g_moon = 1.67;       // 月球重力加速度
    float height, speed, rebound_height;

    /*计算地球上的情况*/
    printf("on Earth (g = 9.81 m/s^2):\n");
    height = initial_height;
    
    // 第一次弹跳
    speed = sqrt(2 * g_earth * height);
    rebound_height = height * 2.0 / 3.0;
    printf("First bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // 第二次弹跳
    height = rebound_height;
    speed = sqrt(2 * g_earth * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Second bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // 第三次弹跳
    height = rebound_height;
    speed = sqrt(2 * g_earth * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Third bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    /*计算月球上的情况*/
    printf("on Moon (g = 1.67 m/s^2):\n");
    height = initial_height;
    
    // 第一次弹跳
    speed = sqrt(2 * g_moon * height);
    rebound_height = height * 2.0 / 3.0;
    printf("First bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // 第二次弹跳
    height = rebound_height;
    speed = sqrt(2 * g_moon * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Second bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // 第三次弹跳
    height = rebound_height;
    speed = sqrt(2 * g_moon * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Third bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    getchar();
    return 0;
}