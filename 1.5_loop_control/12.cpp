/*题目：
    输出一个整数序列中与指定数字相同的数的个数。
输入：
    输入包含2行：第1行为N和m，表示整数序列的长度(N <= 100)和指定的数字，中间用一个空格分开；第2行为N个整数，整数之间以一个空格分开。
输出：
    输出为N个数中与m相同的数的个数。*/
#include <stdio.h>

int main() {
    int m, n, sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0, value; i < n; i++) {
        scanf("%d", &value);
        if (value == m) {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
