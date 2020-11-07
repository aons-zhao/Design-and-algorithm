#include <stdio.h>
//两个整数a和b分别作为分子和分母，即分数 a/b ，求它的浮点数值（双精度浮点数，保留小数点后9位）。 
int main()
{
	int a, b;
	scanf("%d%d",&a, &b);
	printf("%.9lf\n",(double)a/b);
	return 0;
}
