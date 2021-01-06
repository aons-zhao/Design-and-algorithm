#include <stdio.h>
/*将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？*/
int main()
{
	int a;
	bool b;
	scanf("%d",&a);
	b = a, a = b ; 
	printf("%d",a);
	return 0;
}
