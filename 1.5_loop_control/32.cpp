/*题目：
    有一个分数序列q1/p1,q2/p2,q3/p3,q4/p4,q5/p5,....,其中qi+1=qi+pi, pi+1=qi, p1=1, q1=2。
    比如这个序列前6项分别是2/1,3/2,5/3,8/5,13/8,21/13。求这个分数序列的前n项之和。
输入：
    一行，包含一个正整数n(n<=30)。
输出：
    一行，包含一个浮点数，表示分数序列前n项的和，精确到小数点后4位。*/

#include<stdio.h>

int main() {
    int value;
    float sum = 0, temp, p = 1, q = 2;
    scanf("%d", &value);
    for (int i = 0; i < value; i++) {
        sum += (q / p);
        temp = q;
        q = q + p;
        p = temp;
    }
    printf("%.4f", sum);
    return 0;
}


