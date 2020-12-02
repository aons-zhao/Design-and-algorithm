/* 给定三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。
输入:三个正整数，分别表示三条线段的长度，数与数之间以一个空格分开。
如果能构成三角形，则输出“yes” ，否则输出“no”。 */
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
