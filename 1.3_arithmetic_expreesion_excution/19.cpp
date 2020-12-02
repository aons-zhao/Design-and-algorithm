/*输入两个正整数A和B，求A*B。
输入一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
输出一个整数，即A*B的值。*/
#include<stdio.h>
int main()
{
	long int a, b;
	scanf_s("%ld%ld", &a,&b);
	printf("%ld", a * b);
	return 0;
}
