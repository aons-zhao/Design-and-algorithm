/*描述：
        求任意两个不同进制非负整数的转换（2进制～16进制），所给整数在long所能表达的范围之内。
        不同进制的表示符号为（0，1，...，9，a，b，...，f）或者（0，1，...，9，A，B，...，F）。
输入：
    输入只有一行，包含三个整数a，n，b。a表示其后的n 是a进制整数，b表示欲将a进制整数n转换成b进制整数。a，b是十进制整数，2 =< a，b <= 16。
输出：
    输出包含一行，该行有一个整数为转换后的b进制数。输出时字母符号全部用大写表示，即（0，1，...，9，A，B，...，F）。*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char num[40], val[40];
    int a, b, len, temp, sum = 0;
    scanf("%d %s %d", &a, num, &b);
    len = strlen(num);
    // 将a进制转换为十进制
    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        if (num[i] >= '0' && num[i] <= '9') {
            sum = pow(a, j) * (num[i] - '0') + sum;
        } else if (num[i] >= 'a' && num[i] <= 'f') {
            sum = (num[i] - 'a' + 10) * pow(a, j) + sum;
        } else {
            sum = (num[i] - 'A' + 10) * pow(a, j) + sum;
        }
    }
    // 将十进制转化为b进制
    int k = 0;
    do {
        temp = sum % b;
        if (temp < 10) {
            val[k++] = temp + '0';
        } else {
            val[k++] = temp - 10 + 'A';
        }
        sum /= b;
    } while (sum > 0);
    for (int s = k - 1; s >= 0; s--) {
        printf("%c", val[s]);
    }
    return 0;
}

