/* 输入仅一行，一个大于零的正整数n。
输出仅一行，如果n是奇数，输出odd；如果n是偶数，输出even。*/
#include<stdio.h>
int main()
{	
	int n;
	scanf("%d", &n);
	if(n%2==1)	printf("odd");
	else
	{
		printf("even");
	}
	return 0;
}
