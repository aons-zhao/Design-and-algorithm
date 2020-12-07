/*题目：
    求两个大的正整数相减的差。
输入：
    共2行，第1行是被减数a，第2行是减数b(a > b)。每个大整数不超过200位，不会有多余的前导零。
输出：
    一行，即所求的差。*/
#include<stdio.h>
#include<string.h>

int main() {
    char a[300], b[300];
    scanf("%s %s", a, b);
    int i, len, len1, len2;
    int x[300] = {0}, y[300] = {0}, z[300] = {0};
    len1 = strlen(a);
    len2 = strlen(b);
    if (len1 > len2)        // 得到最大的数的位数
        len = len1;
    else len = len2;
    for (i = 0; i < len1; i++)      // 将第一个数反序
        x[i] = a[len1 - i - 1] - '0';
    for (i = 0; i < len2; i++)      // 将第二个数反序
        y[i] = b[len2 - i - 1] - '0';
    for (i = 0; i < len; i++) {     // 进行大整数减法
        z[i] += (x[i] - y[i]);
        if (z[i] < 0) {
            z[i] += 10;
            z[i + 1]--;
        }
    }
    while (z[i] == 0)i--;
    if (i < 0) {
        printf("0\n");
    } else {
        for (; i >= 0; i--)
            printf("%d", z[i]);
    }
    return 0;
}
