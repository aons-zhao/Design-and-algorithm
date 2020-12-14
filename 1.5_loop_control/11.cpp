/*题目：
    给定k（1 < k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
输入：
    输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
输出：
    输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。*/
#include <stdio.h>

int main() {
    int k, x = 0, y = 0, z = 0;
    scanf("%d", &k);
    for (int i = 0, m; i < k; i++) {
        scanf("%d", &m);
        switch (m) {
            case 1:
                x++;
                break;
            case 5:
                y++;
                break;
            case 10:
                z++;
        }
    }
    printf("%d\n%d\n%d", x, y, z);
    return 0;
}
