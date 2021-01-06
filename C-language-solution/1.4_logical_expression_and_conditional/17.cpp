/* 输入: 一个整数a  (0 < a < 3000)。
输出: 如果公元a年是闰年输出Y，否则输出N。
提示：提示公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年,能被3200整除的也不是闰年*/
#include<stdio.h>
int main()
{
     int a;
     scanf("%d", &a);
     if (a % 4 != 0)
         printf("N\n");
     else
         if (a % 100 != 0)
             printf("Y\n");
         else
             if (a % 400 == 0)
                 printf("Y\n");
             else
                 printf("N\n");
     return 0;
}
