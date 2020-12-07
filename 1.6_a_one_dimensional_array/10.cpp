/*题目：
    求两个不超过200位的非负整数的和。
输入：
    有两行，每行是一个不超过200位的非负整数，可能有多余的前导0。
输出：
    一行，即相加后的结果。结果里不能有多余的前导0，即如果结果是342，那么就不能输出为0342。*/

#include <stdio.h>
#include <string.h>

#define M 201 //定义了数量M是201作为数组初始化的数量

int main() {
    int i, j, len1, len2;    // len1是字符数组s1的长度， len2是字符数组s2的长度
    char s1[M], s2[M];
    int num1[M] = {0}, num2[M] = {0};           // 数字数组num1,num2
    scanf("%s", s1);
    scanf("%s", s2);
    len1 = strlen(s1);         //	求第一个加数的位数
    len2 = strlen(s2);         //   求第二个加数的位数
    for (i = len1 - 1, j = 0; i >= 0; i--)   //将s1字符数组转化为数字数组，并倒数存放，作为第一个加数
    {
        num1[j] = s1[i] - '0';
        j++;
    }
    for (i = len2 - 1, j = 0; i >= 0; i--)   //将s2字符数组转化为数字数组，并倒数存放，作为第二个加数
    {
        num2[j] = s2[i] - '0';
        j++;
    }
    for (i = 0; i <= M; i++)               //实现大数的加法
    {
        num1[i] = num1[i] + num2[i];
        if (num1[i] > 9) {
            num1[i] = num1[i] - 10;
            num1[i + 1]++;
        }
    }
    for (i = M - 1; i >= 0 && num1[i] == 0; i--);  //求得最终结果的位数
    if (i > 0) {
        for (; i >= 0; i--)                    //最终答案的输出
        {
            printf("%d", num1[i]);
        }
    } else
        printf("0");
    return 0;
}






