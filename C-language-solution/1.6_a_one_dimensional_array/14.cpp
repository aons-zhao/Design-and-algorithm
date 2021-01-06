/*题目：
    求10000以内n的阶乘。
输入：
    只有一行输入，整数n（0<=n<=10000）。
输出：
    一行，即n!的值。*/
#include<stdio.h>

int a[100000];

int main() {
    int n, m = 1;
    int x, y;
    a[0] = 0;
    a[1] = 1;
    scanf("%d", &n);
    for (x = 1; x <= n; ++x) {      // n的阶乘就循环n次
        for (y = 1; y <= m; ++y) {
            a[y] = a[y] * x;
            a[y] = a[y - 1] / 10 + a[y];
            a[y - 1] = a[y - 1] % 10;
            if (a[y] >= 10 && y >= m)m++;
        }
    }
    for (x = m; x >= 1; --x) {
        printf("%d", a[x]);
    }
    return 0;
}

