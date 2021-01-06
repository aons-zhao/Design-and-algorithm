/*题目：
    输入两个正整数m和k，其中1<m<100000，1<k<5，判断m能否被19整除，且恰好含有k个3，如果满足条件，则输出YES，否则，输出NO。
    例如，输入：43833 3，满足条件，输出YES。如果输入：39331 3，尽管有3个3，但不能被19整除，也不满足条件，应输出NO。
输入：
    m 和 k 的值，中间用单个空格间隔。
输出：
    满足条件时输出 YES，不满足时输出 NO。*/

#include<stdio.h>

int main() {
    int m, temp, count = 0, k, num;
    scanf("%d %d", &m, &k);
    num = m % 19;
    while (m != 0) {
        temp = m % 10;
        m /= 10;
        if (temp == 3) count++;
    }
    if (k == count && (num == 0)) printf("YES");
    else printf("NO");
    return 0;
}


