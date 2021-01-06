/*题目：
    6 * 9 = 42 对于十进制来说是错误的，但是对于13进制来说是正确的。即, 6(13)* 9(13)= 42(13)， 而 42(13)= 4 * 131+ 2 * 130= 54(10)。
    你的任务是写一段程序，读入三个整数p、q和 r，然后确定一个进制 B(2<=B<=16) 使得 p * q = r。 如果 B 有很多选择, 输出最小的一个。
例如：
    p=11,q=11,r=121,则有11(3)*11(3)=121(3)因为11(3)=1*31+1*30=4(10)和121(3)=1*32+2*31+1*30=16(10)。对于进制10，同样有
    11(10)*11(10)=121(10)。这种情况下，应该输出3。如果没有合适的进制，则输出0。
输入：
    一行，包含三个整数p、q、r。 p、q、r的所有位都是数字，并且1 <= p、q、r <= 1,000,000。
输出：
    一个整数：即使得p * q = r成立的最小的B。如果没有合适的B，则输出 0。*/
//C语言解法
#include <stdio.h>

int change(int n, int i) {    // 改变成10进制
    int j = 1, num = 0;
    while (n != 0) {
        if (n % 10 >= i)
            return -1;      // 返回一个负数使其P * Q == R等式不成立
        num += (n % 10) * j;
        j *= i;
        n /= 10;
    }
    return num;
}

int main() {
    int p, q, r, P, Q, R;
    scanf("%d %d %d", &p, &q, &r);
    for (int i = 2; i <= 16; ++i) {     // 循环2~16的进制数
        P = change(p, i);
        Q = change(q, i);
        R = change(r, i);
        if (P * Q == R) {    // 如果换成相同的进位制等式成立则说明进制存在
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}


//C++解法
#include <iostream>

using namespace std;

int change(int n, int i) {    // 改变成10进制
    int j = 1, num = 0;
    while (n != 0) {
        if (n % 10 >= i)
            return -1;      // 返回一个负数使其P * Q == R等式不成立
        num += (n % 10) * j;
        j *= i;
        n /= 10;
    }
    return num;
}
int main() {
    int p, q, r, P, Q, R;
    cin >> p >> q >> r;
    for (int i = 2; i <= 16; ++i) {     // 循环2~16的进制数
        P = change(p, i);
        Q = change(q, i);
        R = change(r, i);
        if (P * Q == R) {    // 如果换成相同的进位制等式成立则说明进制存在
            cout << i << endl;
            return 0;
        }
    }
    cout << '0' << endl;
    return 0;
}


