/*题目：
    输入1行句子（不多于200个单词，每个单词长度不超过100），只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。
    试输出第1个最长的单词和第1个最短单词。
输入：
    一行句子。
输出：
    两行输出：第1行，一个最长的单词。第2行，一个最短的单词。*/
#include<stdio.h>
#include<string.h>

int main() {
    char s[400];
    int x[300], y[300], z[300];
    gets(s);
    int i, j = 0, k = 0, len;
    int min = 0, max = 0;
    len = strlen(s);
    for (i = 0; i < len; i++) {     // 循环len次
        while (s[i] != ' ' && s[i] != '\0') {       // 当此字符不为空格和结尾换行符时进入while循环
            j++, i++;
        }
        x[k] = j;       // x数组储存单个单词长度
        y[k] = i;       // y数组储存值类似于索引
        z[k++] = i - j;
        j = 0;
    }
    for (i = 0; i < k; i++) {       // 在x数组中找出最长单词和最小单词的长度
        if (x[i] > x[max]) {
            max = i;
        } else if (x[i] < x[min]) {
            min = i;
        }
    }
    for (i = z[max]; i < y[max]; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    for (i = z[min]; i < y[min]; i++) {
        printf("%c", s[i]);
    }
    return 0;
}

