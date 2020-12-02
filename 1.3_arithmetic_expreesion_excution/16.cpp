/*已知线段的两个端点的坐标A（Xa,Ya），B（Xb，Yb），求线段AB的长度.
输入共两行。
第一行是两个实数Xa，Ya，即A的坐标。
第二行是两个实数Xb，Yb，即B的坐标。
输入中所有实数的绝对值均不超过10000。
输出值保留到小数点后3位。*/ 
#include <stdio.h>
#include <math.h>
int main()
{
	double Xa, Ya, Xb, Yb, s;
	scanf("%lf%lf\n", &Xa, &Ya);
	scanf("%lf%lf", &Xb, &Yb);
	s = sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb));
	printf("%.3lf",s);
	return 0;
}
