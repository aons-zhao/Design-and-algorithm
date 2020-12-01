/* 输入三个整数,输出最大的数。
输入:包含三个整数，数与数之间以一个空格分开。
输出:一个整数，即最大的整数。 */
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d", a);
	}
	if (b > a && b > c)
	{
		printf("%d", b);
	}
	if (c > a && c > b)
	{
		printf("%d", c);
	}
	return 0;
}
