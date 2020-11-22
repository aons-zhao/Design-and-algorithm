/*计算下列分段函数y=f(x)的值。
y=-x+2.5; (0 <= x < 5)
y=2-1.5(x-3)(x-3); (5 <= x < 10)
y=x/2-1.5; (10 <= x < 20)
输入一个浮点数N,0 <= N < 20；
输出对应的分段函数值：f(N)。结果保留到小数点后三位。*/
#include<stdio.h>
int main()
{
     double x, y;
     scanf("%lf", &x);
     if (x >= 10)
		 y = x / 2 - 1.5;
		 else
	       if (x >= 5)
				y = 2 - 1.5 * (x - 3) * (x - 3);
		   else
				y = -x + 2.5;
     printf("%.3lf\n", y);
     return 0;
}
