/* 任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO*/
#include<stdio.h>
int main()
{	
	char n;
	scanf("%c", &n);
	if(n%2==1)	printf("YES");
	else
	{
		printf("NO");
	}
	return 0;
}
