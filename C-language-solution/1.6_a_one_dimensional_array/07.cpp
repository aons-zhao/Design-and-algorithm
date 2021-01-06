/*题目：
    一个长度为n（n>0）的序列中存在“有趣的跳跃”当前仅当相邻元素的差的绝对值经过排序后正好是从1到(n-1)。例如，1 4 2 3存在“有趣的跳跃”，因为差的
    绝对值分别为3,2,1。当然，任何只包含单个元素的序列一定存在“有趣的跳跃”。你需要写一个程序判定给定序列是否存在“有趣的跳跃”。
输入：
    一行，第一个数是n（0 < n < 3000），为序列长度，接下来有n个整数，依次为序列中各元素，各元素的绝对值均不超过1,000,000,000。
输出：
    一行，若该序列存在“有趣的跳跃”，输出"Jolly"，否则输出"Not jolly"。*/

#include<stdio.h>

int main() {
    long long int c, i, j, d, t, n;
    scanf("%lld", &n);
    if (n == 1) {
        printf("Jolly");
        return 0;
    }
    int m[n], b[n - 1];
    scanf("%lld", &m[0]);
    for (d = 1, i = 0; d < n; d++, i++) {
        scanf("%lld", &m[d]);
        c = m[d] - m[d - 1];
        if (c < 0)c = -c;
        b[i] = c;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i; j < n - 1; j++) {
            if (b[i] > b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    for (i = 0; i < n - 2; i++) {
        if (b[i + 1] - b[i] == 1)
            continue;
        else break;
    }
    if (i == n - 2)printf("Jolly");
    else printf("Not jolly");
    return 0;
}

