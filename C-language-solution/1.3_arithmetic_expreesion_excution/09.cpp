#include <stdio.h>
//给出圆的半径，求圆的直径、周长和面积。
int main()
{
	double r, d, c, s;
	double pi=3.14159;
	scanf("%lf",&r);
	d=2*r;
	c=2*pi*r;
	s=pi*r*r;
	printf("%.4lf %.4lf %.4lf",d,c,s);
	return 0;
}
