#include <stdio.h>
//给定一个字符，用它构造一个底边长5个字符，高3个字符的等腰字符三角形。
int main()
{
	char a;
	scanf("%c",&a);
	printf("  %c\n",a);
	printf(" %c%c%c\n",a,a,a);
	printf("%c%c%c%c%c",a,a,a,a,a);
	return 0;
}
