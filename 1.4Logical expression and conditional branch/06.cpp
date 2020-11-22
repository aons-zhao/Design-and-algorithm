/* 任意输入一个正整数，不超过1000,判断是否是两位数（即大于等于10且小于等于99）。
若该正整数是两位数，输出1，否则输出0。*/
#include<stdio.h>
int main()
{	
	int x;
	scanf("%d", &x);
	if (10 <= x && x <= 99)	printf("1");
	else
	{
		printf("0");
	}
	return 0;
}
