#include <stdio.h>
//利用公式 C = 5 * (F-32) / 9 （其中C表示摄氏温度，F表示华氏温度） 进行计算转化。
int main()
{
	double c, f; 
	scanf("%lf",&f);
	c = 5 * (f-32) / 9;
	printf("%.5lf",c);
	return 0;
}
