#define _CRT_SECURE_NO_WARNINGS//to avoid warnings
#include <stdio.h>
int main()
{
    // 5a: 创建二进制文件并写入数据
    float grades[5][4] = {
        {90.3, 92.7, 90.3, 99.8},
        {85.3, 90.5, 87.3, 90.8},
        {93.2, 88.4, 93.8, 75.6},
        {82.4, 95.6, 78.2, 90.0},
        {93.5, 80.2, 92.9, 94.4}
    };

    FILE* file = fopen("grades.bin", "wb");//创建二进制文件
    if (file == NULL)
    {
        printf("无法创建文件！\n");
        return 1;
	}
    fwrite(grades, sizeof(grades), 1, file);
    fclose(file);
    printf("grades.bin文件创建成功!\n");

    // 5b: 从二进制文件读取并计算平均值
    float readGrades[5][4];
    file = fopen("grades.bin", "rb");
    if (file == NULL)
    {
        printf("无法打开文件！\n");
        return 1;
	}
    fread(readGrades, sizeof(readGrades), 1, file);//读取数据
    fclose(file);
    
    //计算平均值并输出
    for (int i = 0; i < 5; i++) {
        float sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += readGrades[i][j]/4;
        }
        printf("第%d组的平均分为：%.2f\n", i+1, sum);
    }
     
	getchar();//清除输入缓存区
	getchar();//清除输入缓存区
	return 0;
}