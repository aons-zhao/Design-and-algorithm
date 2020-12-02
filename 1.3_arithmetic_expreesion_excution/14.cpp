#include <stdio.h>
#include <math.h>
//大象要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。
int main()
{
	int r, h, c;
	double pi=3.14159, b;
	printf("请依次输入h和r：");
	scanf("%d%d", &h, &r);
	b=20000/(pi*r*r*h);
	c=ceil(b);
	printf("%d",c);
	return 0; 
}
