/*题目：
    给定一个整数，要求从个位开始分离出它的每一位数字。
输入：
    一个整数，整数在1到100000000之间。
输出：
    从个位开始按照从低位到高位的顺序依次输出每一位数字。数字之间以一个空格分开。*/

#include<stdio.h>

int main() {
    int value, temp;
    scanf("%d", &value);
    while (!(value > 0 && value < 10)) {    // 只要输入的数字不是在0~9
        temp = value % 10;     // 分离出最后一位数字
        value /= 10;
        printf("%d ", temp);
    }
    printf("%d", value);
    return 0;
}

