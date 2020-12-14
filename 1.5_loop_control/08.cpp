/*题目：
    在欧几里德几何中，n边形的内角和是(n-2)*180°。已知其中(n-1)个内角的度数,就能计算出剩下的一个未知内角的度数。请编写一个程序来解决这个问题。
输入：
    第1行只有一个正整数n表示多边形边数;第二行有(n-1)个已知内角的度数,相邻两个整数之间用单个空格隔开。数据保证给定多边形合法。
输出：
    一个正整数,为未知内角的度数。*/
#include <stdio.h>

int main() {
    int n, sum, value, tem_sum = 0;
    scanf("%d", &n);
    sum = (n - 2) * 180;
    for (int i = 0, m; i < n - 1; i++) {
        scanf("%d", &m);
        tem_sum += m;
    }
    value = sum -tem_sum;
    printf("%d", value);
    return 0;
}
