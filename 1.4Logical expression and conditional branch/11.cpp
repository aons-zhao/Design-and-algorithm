/*晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，请帮晶晶判断她能否接受贝贝的邀请；
输入：日期，用数字1到7表示从星期一到星期日。
输出：如果能输出YES；如果不能则输出NO。*/
#include<stdio.h>
int main()
{	
	int x;
	scanf("%d", &x);
	if (x == 1 || x == 3 || x == 5)	printf("NO");
	else
	{
		printf("YES");
	}
	return 0;
}
