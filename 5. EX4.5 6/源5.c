#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
        int card1, card2, card3;
        int total = 0;
        int ace_count = 0;

        // 输入三张牌的值
        printf("请输入三张牌的值（1-13，其中1代表A，11代表J，12代表Q，13代表K）:\n");
        printf("第一张牌: ");
        scanf("%d", &card1);
        printf("第二张牌: ");
        scanf("%d", &card2);
        printf("第三张牌: ");
        scanf("%d", &card3);

        // 计算每张牌的点数并统计A的数量
        int cards[3] = { card1, card2, card3 };

        for (int i = 0; i < 3; i++) {
            if (cards[i] == 1) { // A
                ace_count++;
                total += 11; // 先按11计算
            }
            else if (cards[i] >= 2 && cards[i] <= 10) { // 2-10
                total += cards[i];
            }
            else if (cards[i] >= 11 && cards[i] <= 13) { // J, Q, K
                total += 10;
            }
        }

        // 调整A的点数（如果总点数超过21）
        while (total > 21 && ace_count > 0) {
            total -= 10; // 将一个A从11调整为1
            ace_count--;
        }

        // 显示结果
        printf("\n牌值: %d, %d, %d\n", card1, card2, card3);
        printf("总点数: %d\n", total);

        if (total > 21) {
            printf("爆牌了！\n");
        }
        else if (total == 21) {
            printf("黑杰克！\n");
        }
        else {
            printf("当前点数: %d\n", total);
        }                   
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}