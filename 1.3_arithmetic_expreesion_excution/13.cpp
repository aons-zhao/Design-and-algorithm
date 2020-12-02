#include <stdio.h>
//将一个三位数反向输出。
int main()
{
	char a[3];
	int i;
	scanf("%s",&a);
	for(i=2;i>=0;i--)
		printf("%d",a[i]-'0');
	return 0;
}
