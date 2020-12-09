/*题目：
    一般的文本编辑器都有查找单词的功能，该功能可以快速定位特定单词在文章中的位置，有的还能统计出特定单词在文章中出现的次数。
    现在，请你编程实现这一功能，具体要求是：给定一个单词，请你输出它在给定的文章中出现的次数和第一次出现的位置。注意：匹配单词时，不区分大小写，
    但要求完全匹配，即给定单词必须与文章中的某一独立单词在不区分大小写的情况下完全相同（参见样例1），如果给定单词仅是文章中某一单词的一部分则不算
    匹配（参见样例2）。
输入：
    第 1 行为一个字符串，其中只含字母，表示要查找的单词；
    第 2 行为一个字符串，其中只可能包含字母和空格，表示给定的文章。
输出：
    只有一行，如果在文章中找到给定单词则输出两个整数，两个整数之间用一个空格隔开，分别是单词在文章中出现的次数和第一次出现的位置（即在文章中第一次
    出现时，单词首字母在文章中的位置，位置从0开始）；如果单词在文章中没有出现，则直接输出一个整数-1。*/
/*C++语言*/
#include <iostream>
#include <cstring>

using namespace std;
char s[1000000], x[1000], y[1000];     // "s"为文章字符串；"x"为要统计的单词字符串；"y"为临时分割出的单词
int main() {
    gets(x);
    for (int i = 0; x[i] != '\0'; ++i) {        // 此循环是将需要统计的单词全部换为小写
        if (x[i] >= 'A' && x[i] <= 'Z') {
            x[i] += 'a' - 'A';
        }
    }
    gets(s);
    int temp = 0, count = 0, len;       // temp相当于临时分割出来的字母表示为i，注意判断完后要重置为0进行下一次判断
    int num = 0, first = 0;     // num是统计总数，first是首次出现位置
    bool isFirst = true;
    len = strlen(s);
    for (int i = 0; i < len + 1; ++i) {     // 遍历s中的每一个字符
        if (temp == 0) {
            count = i;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {       // 将s中的大写换成小写并继续循环下一个字符
            y[temp] = s[i] + 'a' - 'A';
            temp++;
        } else if (s[i] != ' ' && s[i] != '\0') {    // 如果此字符不是大写而且不是结尾换行符 (注意有个'\0'别忘记判断)
            y[temp] = s[i];
            temp++;
        } else {
            y[temp] = '\0';     // 换行得到临时字符串
            if (strcmp(y, x) == 0) {
                if (isFirst) {      // 一旦判断成功，就再也不再进行判断
                    first = count;
                    isFirst = false;
                }
                num++;      // 如果临时字符串和要统计的单词相同的话，则统计总数加1
            }
            temp = 0;       // 重置temp为0进行下一次循环
        }
    }
    if (!num) {     // 如果num为0
        cout << -1 << endl;
    } else {
        cout << num << " " << first;
    }
    return 0;
}
