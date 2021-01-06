/*题目：
    将正整数 m 和 n 之间（包括 m 和 n）能被 17 整除的数累加。其中，0 < m < n < 1000。
输入：
    一行，包含两个整数m和n，其间，以一个空格间隔。
输出：
    输出一行，包行一个整数，表示累加的结果。*/
#include <stdio.h>

int main() {
    int m, n, sum = 0;
    scanf("%d %d", &m, &n);
    for (m; m <= n; m++) {
        if (m % 17 == 0){
            sum += m;
        }
    }
    printf("%d", sum);
    return 0;
}
