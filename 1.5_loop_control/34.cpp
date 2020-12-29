/*题目：
    给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!）
输入：
    输入有一行，包含一个正整数n（1 < n < 12）。
输出：
    输出有一行：阶乘的和。*/
#include<stdio.h>

int main() {
    int value, sum = 0, temp = 1;
    scanf("%d", &value);
    for (int i = 1; i <= value; i++) {
        temp = temp * i;
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}


