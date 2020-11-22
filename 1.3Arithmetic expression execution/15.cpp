//一箱n个苹果，箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
#include <stdio.h>
int main()
{
	int n, x, y, a;
	scanf("%d%d%d", &n, &x, &y);
	a = y / x;
	if(a*x < y)
	{
		a=a+1;
	}
	printf("%d",n-a);
	return 0;
}
