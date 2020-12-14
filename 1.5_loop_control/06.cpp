/*题目：
    给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。
输入：
    一共2行，第一行为序列的个数n（1 <= n <= 1000)，第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。
输出：
    输出一行，表示序列的最大跨度值。*/
#include <stdio.h>

int main() {
    int n, max = 0, min = 1000, value;
    scanf("%d", &n);
    for (int i = 0, m; i < n; i++) {
        scanf("%d", &m);
        if (m > max) {
            max = m;
        }
        if (m < min) {
            min = m;
        }
    }
    value = max - min;
    printf("%d", value);
    return 0;
}
