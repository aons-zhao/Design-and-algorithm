/*题目：
    求字符串中最长的"连续"出现的字符，输出该字符及其出现次数。字符串中无空白字符（空格、回车和tab），如果这样的字符不止一个，则输出出现最早的字符。
输入：
    一行，一个不包含空白字符的字符串，字符串长度小于200。
输出：
    一行，输出最长的连续出现的字符及其最长的连续出现次数，中间以一个空格分开。*/
//C语言解法
#include <stdio.h>
#include <string.h>

int main() {
    char a[300], max_m;
    gets(a);
    int len = strlen(a);
    int num = 1, max = 0;
    for (int i = 0; i < len; ++i) {
        if (a[i] == a[i + 1]) {   // 如果相邻两个字符相等则num加1
            num++;
        } else {
            if (num > max) {   // 如果找到出现次数最多的数就赋给max
                max = num;
                max_m = a[i];
            }
            num = 1;
        }
    }
    printf("%c %d", max_m, max);
    return 0;
}


//C++解法
#include <iostream>
#include <cstring>

using namespace std;
char a[300];

int main() {

    cin >> a;
    int len = strlen(a);
    int num = 1, max = 0;
    char max_m;
    for (int i = 0; i < len; ++i) {
        if (a[i] == a[i + 1]) {   // 如果相邻两个字符相等则num加1
            num++;
        } else {
            if (num > max) {   // 如果找到出现次数最多的数就赋给max
                max = num;
                max_m = a[i];
            }
            num = 1;
        }
    }
    cout << max_m << " " << max;
}

