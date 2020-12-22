/* 题目：已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
        现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。
输入：
    一个整数K。
输出：
    一个整数n。*/
#include<stdio.h>

int main() {
    int k, n;
    double sum = 0;
    scanf("%d", &k);
    for (n = 1;; n++) {
        sum = sum + (1.0 / n);
        if (sum > k) break;
    }
    printf("%d", n);
    return 0;
}
