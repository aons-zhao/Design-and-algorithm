/*题目:
    给定若干个四位数，求出其中满足以下条件的数的个数：个位数上的数字减去千位数上的数字，再减去百位数上的数字， 再减去十位数上的数字的结果大于零。
输入:
    输入为两行，第一行为四位数的个数n，第二行为n个的四位数，数与数之间以一个空格分开。(n <= 100)
输出:
    输出为一行，包含一个整数，表示满足条件的四位数的个数。*/
#include <stdio.h>

int main() {
    int n, value, zero_digits, ten_digits, hundred_digits, thousand_digits, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        zero_digits = value % 10;
        ten_digits = value % 100 / 10;
        hundred_digits = value % 1000 / 100;
        thousand_digits = value / 1000;
        if (zero_digits - thousand_digits - hundred_digits - ten_digits > 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}


