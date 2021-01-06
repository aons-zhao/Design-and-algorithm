/*判断一个数n 能否同时被3和5整除。
输入一行，包含一个整数n。（ -1,000,000 < n < 1,000,000）。
输出一行，如果能同时被3和5整除输出YES，否则输出NO。*/
#include<stdio.h>
int main()
{	
	int n;
	scanf("%d", &n);
	if (n%3==0 && n%5==0)	printf("YES");
	else
	{
		printf("NO");
	}
	return 0;
}
