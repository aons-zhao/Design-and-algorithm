/*给出一个等差数列的前两项a1，a2，求第n项是多少。
输入一行，包含三个整数a1，a​2，n。-100 <= a1,a​2 <= 100，0 < n <= 1000。
输出一个整数，即第n项的值。*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a1, a2, n, d, an;
	scanf_s("%d%d%d", &a1, &a2, &n);
	d = a2 - a1;
	an = a1 + (n - 1) * d;
	printf("%d", an);
	return 0;
}
