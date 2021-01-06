#include <stdio.h>
//给定一个字符，用它构造一个对角线长5个字符，倾斜放置的菱形。
int main()
{
	char a;
	scanf("%c",&a);
	printf("  %c\n",a);
	printf(" %c%c%c\n",a,a,a);
	printf("%c%c%c%c%c\n",a,a,a,a,a);
	printf(" %c%c%c\n",a,a,a);
	printf("  %c",a);
	return 0;
}
