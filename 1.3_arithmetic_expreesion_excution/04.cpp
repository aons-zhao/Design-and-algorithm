#include <stdio.h>
//给定被除数和除数，求整数商及余数。此题中请使用默认的整除和取余运算，无需对结果进行任何特殊处理。
int main()
{
	int a, b;
	scanf("%d%d",&a, &b);
	printf("%d %d", a/b, a%b);
	return 0;
}
