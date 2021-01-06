/*题目:
    监护室每小时测量一次病人的血压,若收缩压在90 - 140之间并且舒张压在60 - 90之间(包含端点值)则称之为正常,现给出某病人若干次测量的血压值,计算
    病人保持正常血压的最长小时数。
输入:
    第一行为一个正整数n，n < 100其后有n行，每行2个正整数，分别为一次测量的收缩压和舒张压，中间以一个空格分隔。
输出:
    输出仅一行，血压连续正常的最长小时数。*/
#include <stdio.h>

int main() {
    int n, shrink, diastole, time = 0, value = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &shrink, &diastole);
        if (shrink >= 90 && shrink <= 140 && diastole >= 60 && diastole <= 90) {
            value++;
        } else {
            if (time < value) time = value;
            value = 0;
        }
    }
    if (time < value) time = value;
    printf("%d", time);
    return 0;
}
