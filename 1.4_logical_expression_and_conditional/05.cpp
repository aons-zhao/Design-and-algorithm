/* 任意输入两个整数，比较它们的大小。并输出相应的 < > = 符号。
0 <= x < 2^32, -2^31 <= y < 2^31。*/
#include<stdio.h>
int main()
{	
	long int x, y;
	scanf("%ld%ld", &x, &y);
	if (x < y)	printf("<");
	if(x==y)	printf("=");
	if (x > y)	printf(">");
	return 0;
}
