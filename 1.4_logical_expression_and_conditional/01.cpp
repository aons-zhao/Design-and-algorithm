/* 给定一个整数N，判断其正负。
输入一个整数N(-109 <= N <= 109)。
输出如果N > 0, 输出positive；如果N = 0, 输出zero；如果N < 0, 输出negative。*/
#include<stdio.h>
int main()
{	
	int n;
	scanf("%d", &n);
	if(n > 0)	printf("positive");
	if(n == 0)	printf("zero");
	if (n < 0)	printf("negative");
	return 0;
}
