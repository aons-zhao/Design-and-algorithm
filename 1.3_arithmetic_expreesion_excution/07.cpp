#include <stdio.h>
//对于多项式f(x) = ax^3 + bx^2 + cx + d 和给定的a, b, c, d, x，计算f(x)的值。
int main()
{
	double x, a, b, c, d, fx; 
	scanf("%lf %lf %lf %lf %lf",&x,&a,&b,&c,&d);
	fx=(a*x*x*x)+(b*x*x)+(c*x)+d;
	printf("%.7lf",fx);
	return 0;
}
