/*题目：
    利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 求e 。
输入：
    一行，该行包含一个整数n(2<=n<=15)，表示计算e时累加到1/n！。
输出：
    一行，该行包含计算出来的e的值，要求打印小数点后10位。
提示:
1、e以及n!用double表示。
2、要输出浮点数、双精度数小数点后10位数字，可以用下面这种形式：printf("%.10f", num); */
#include<stdio.h>

int main() {
    int num;
    double sum = 2, temp = 1;
    scanf("%d", &num);
    for (int i = 2; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            temp *= j;
        }
        sum += (1.0 / temp);
        temp = 1;
    }
    printf("%.10f", sum);
    return 0;
}



