/* 题目：一个最简单的计算器，支持+, -, *, / 四种运算。
       仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。
输入：共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。
输出：一个整数，为运算结果。然而：
        1. 如果出现除数为0的情况，则输出：Divided by zero!
        2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!  */
#include<stdio.h>
int main()
{
    int x, y;
     char a;
     scanf("%d %d %c", &x, &y, &a);
     if ((a != '+') && (a != '-') && (a != '*') && (a != '/'))
         printf("Invalid operator!");
     else
         if (a == '+')
             printf("%d", x + y);
         if (a == '-')
             printf("%d", x - y);
         if (a == '*')
             printf("%d", x * y);
         if (a == '/')
             if (y == 0)
                 printf("Divided by zero!");
             else
                 printf("%d", x / y);
     return 0;
}
