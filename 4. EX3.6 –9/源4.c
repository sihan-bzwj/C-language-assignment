#include <stdio.h>
#include <math.h>

int main() {
    float initial_height = 2.0; // ��ʼ�߶�2.0��
    float g_earth = 9.81;      // �����������ٶ�
    float g_moon = 1.67;       // �����������ٶ�
    float height, speed, rebound_height;

    /*��������ϵ����*/
    printf("on Earth (g = 9.81 m/s^2):\n");
    height = initial_height;
    
    // ��һ�ε���
    speed = sqrt(2 * g_earth * height);
    rebound_height = height * 2.0 / 3.0;
    printf("First bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // �ڶ��ε���
    height = rebound_height;
    speed = sqrt(2 * g_earth * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Second bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // �����ε���
    height = rebound_height;
    speed = sqrt(2 * g_earth * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Third bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    /*���������ϵ����*/
    printf("on Moon (g = 1.67 m/s^2):\n");
    height = initial_height;
    
    // ��һ�ε���
    speed = sqrt(2 * g_moon * height);
    rebound_height = height * 2.0 / 3.0;
    printf("First bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // �ڶ��ε���
    height = rebound_height;
    speed = sqrt(2 * g_moon * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Second bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    // �����ε���
    height = rebound_height;
    speed = sqrt(2 * g_moon * height);
    rebound_height = height * 2.0 / 3.0;
    printf("Third bounce: impact speed = %.2f m/s, rebound height = %.2f m\n", speed, rebound_height);

    getchar();
    return 0;
}