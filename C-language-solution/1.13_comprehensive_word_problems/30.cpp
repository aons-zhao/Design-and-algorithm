/*题目：
    给定一个十进制非负整数N，求其对应2进制数中1的个数。
输入：
    输入包含一行，包含一个非负整数N。(N < 10^9)
输出：
    输出一行，包含一个整数，表示N的2进制表示中1的个数。*/
//C语言解法
#include <stdio.h>

int main() {
    int n, i = 0, count = 0, num;
    scanf("%d", &n);
    while (n) {
        num = n % 2;
        n /= 2;
        if (num == 1) count++;
    }
    printf("%d", count);
    return 0;
}

//C++解法
#include <iostream>

int a[500];
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    int num = 0;
    while (n) {
        a[i++] = n % 2;
        n /= 2;
        if (a[i - 1] == 1)num++;
    }
    cout << num;
}

