/* 题目：Larry今年找到一份工作。他赚很多钱，但似乎总是不够。Larry认为他需要控制他的投资以解决自己的财务问题。
Larry拿到自己的银行账户详单，想看自己有多少钱。请帮助Larry写一个程序，通过过去12个月中每月的月末结余，计算平均结余。
输入：包含12行,每行包含一个数，为某个月的结余。每个数都是不大于1,000,000的正数，保留两位小数，省略"$"符。
输出：一个数，为这12个月的平均月末结余，保留到小数点后第二位，并在最前面加一个"$"符。 */
#include<stdio.h>
int main()
{
    float sum = 0, r = 0, x;
    for (int i = 1; i <= 12; i++) 
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("$%.2f", sum / 12);
    return 0;
}
