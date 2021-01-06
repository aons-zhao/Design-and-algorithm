/*题目：
    编写程序，输入n的值，求 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 - 1/8 + ... + (-1)n-1·1/n 的值。
输入：
    一个正整数n。1<=n<=1000。
输出：
    一个实数，为表达式的值，保留到小数点后四位。*/

#include<stdio.h>

int main() {
    int value;
    double q = 1, sum = 0;
    scanf("%d", &value);
    for (int i = 1; i <= value; i++) {
        sum += 1.0 / i * q;
        q = -q;
    }
    printf("%.4lf", sum);
    return 0;
}


