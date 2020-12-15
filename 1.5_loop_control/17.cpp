/*题目:
    菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1,接下来每个数都等于前面2个数之和。给出一个正整数k,要求菲波那契数列中第k个数是多少。
输入:
    输入一行,包含一个正整数k。（1 <= k <= 46）
输出:
    输出一行,包含一个正整数,表示菲波那契数列中第k个数的大小。*/
#include<stdio.h>

int main() {
    int m = 1, k, value = 1;
    scanf("%d", &k);
    for (int i = 0; i < k-2; i++) {
        value += m;
        m = value - m;
    }
    printf("%d", value);
    return 0;
}
