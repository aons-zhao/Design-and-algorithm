/*题目：
    输入一个字符串，以回车结束（字符串长度<=100）。该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。现需要将其中的某个单词
    替换成另一个单词，并输出替换之后的字符串。
输入：
    输入包括3行，
    第1行是包含多个单词的字符串s
    第2行是待替换的单词a(长度 <= 100)
    第3行是a将被替换的单词b(长度 <= 100)
    s, a, b 最前面和最后面都没有空格
输出：
    输出只有 1 行，将s中所有单词a替换成b之后的字符串。*/

#include<stdio.h>
#include<string.h>

int main() {
    char s[200], a[200], b[200], value[200];
    int i, j, k = 0, len_s, len_a, len_b, m, n, count;
    gets(s);
    scanf("%s%s", a, b);
    len_s = strlen(s);    // 分别求出字符长度
    len_a = strlen(a);
    len_b = strlen(b);
    for (i = 0; i < len_s; i++) {       // 循环len_s次
        m = i, count = 0;
        for (j = 0; j < len_a; j++) {       // 只循环len_a次
            if (s[i] == a[j]) {
                i++;
                count++;    // count的作用是找到相同字符的位数
            }
        }
        if (count == len_a && (s[i] == ' ' || s[i] == '\0') && (m - 1 < 0 || s[m - 1] == ' ')) {  //三个判断条件
            for (n = 0; n < len_b; n++) {
                value[k++] = b[n];
            }
            value[k++] = s[i];      // 把i用掉
        } else {
            for (; m <= i; m++) {
                value[k++] = s[m];
                value[k] = s[m + 1];    // 提前赋值，因为到最后一个字母时可能会出现'\0'没有带入的情况
            }
        }
    }
    puts(value);
    return 0;
}



