/* 输入一个浮点数，输出这个浮点数的绝对值。
输入一个浮点数，其绝对值不超过10000。
输出这个浮点数的绝对值，保留到小数点后两位。*/
#include<stdio.h>
int main()
{	
	float a;
	scanf("%f", &a);
	if(a >= 0)	printf("%.2f", a);
	else
	{
		printf("%.2f", -a);
	}
	return 0;
}
