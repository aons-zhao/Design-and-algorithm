/* 给定非负整数n，求2的n次方。
输入一个整数n。0 <= n < 31。
输出一个整数，即2的n次方*/
#include<stdio.h>
int main()
{
	long int n, sum, i;
	scanf_s("%ld", &n);
	for (sum = 1, i = 1; i <= n; i++)
		sum = sum * 2;
	printf("%ld", sum);
	return 0;
}
