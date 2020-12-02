/* 输入：有两行，第一行为一个整数n（n小于100），代表样本容量；
         第二行包含n个绝对值不超过1000的浮点数，代表各个样本数据。
输出：一个浮点数，表示均值，精确到小数点后4位。 */
#include<stdio.h>
int main()
{
    int n, i;
    float y, sum = 0, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%f", &y),
        sum += y;
    m = sum / n;
    printf("%.4f", m);
    return 0;
}
