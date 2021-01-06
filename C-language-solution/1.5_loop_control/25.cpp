/*题目：一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示。
输入：无。
输出三行：
    第一行是此自然数的十进制表示；
    第二行是此自然数的七进制表示；
    第三行是此自然数的九进制表示。*/

#include<stdio.h>
int main()
{
    int a, b, c, n;
    int x, y, z;
    for (n = 1; n <= 999; n++)
    {
        a = n % 7;
        b = n / 7 % 7;
        c = n / 7 / 7;
        x = n % 9;
        y = n / 9 % 9;
        z = n / 9 / 9;
        if (a == z && b == y && c == x)
            printf("%d\n", n),
            printf("%d%d%d\n", c, b, a),
            printf("%d%d%d\n", z, y, x);
    }
    return 0;
}
