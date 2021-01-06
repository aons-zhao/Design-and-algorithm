//C++解法
#include <iostream>
#include <cstring>

using namespace std;
char k[200], c[1500];

int main() {
    gets(k);     // 输入密钥k
    gets(c);     // 输入密文c
    int lenk = strlen(k);
    int lenc = strlen(c);
    for (int i = 0; i < lenc; ++i) {    // 循环密文中的每一个字符并将字符赋给temp
        char temp = c[i];
        c[i] -= ((k[i % lenk] >= 'a') ? (k[i % lenk] - 'a') : k[i % lenk] - 'A');       // 判断大小写并进行计算
        if ((temp >= 'a' && c[i] < 'a') || (temp >= 'A' && c[i] < 'A')) {       // 判断是否越界
            c[i] += ('z' - 'a' + 1);
        }
    }
    cout << c << endl;
    return 0;

//C语言解法
#include <stdio.h>
#include <string.h>

int main() {
    char k[200], c[1500];
    int lenk, lenc;
    char temp;
    gets(k);
    gets(c);
    lenk = strlen(k);
    lenc = strlen(c);
    for (int i = 0; i < lenc; ++i) {
        temp = c[i];
        c[i] -= ((k[i % lenk] >= 'a') ? (k[i % lenk] - 'a') : k[i % lenk] - 'A');
        if ((temp >= 'a' && c[i] < 'a') || (temp >= 'A' && c[i] < 'A')) {
            c[i] += ('z' - 'a' + 1);
        }
    }
    printf("%s", c);
    return 0;
}
}
