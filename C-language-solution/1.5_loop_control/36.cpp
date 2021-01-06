/*题目：假定多项式的形式为x^n+x^(n-1)+…+x^2+x+1，请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。
输入：仅一行，包括x和n，用单个空格隔开。x在float范围内，n <= 1000000。
输出：一个实数，即多项式的值，精确到小数点后两位。保证最终结果在float范围内。*/

#include<stdio.h>
#include<math.h>
int main()
{
	double x, sum = 0;
	int n, i;
	scanf("%lf %d", &x, &n);
	for (i = n; i >= 1; i--)
	{
		sum += pow(x, i);
	}
	printf("%.2lf", sum + 1);
	return 0;
}
