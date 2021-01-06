/*
输入：一个整数n（1<= n <= 100），表示学生的人数。其后n行每行有1个整数，表示每个学生的年龄，取值为15到25。
输出：一个浮点数，为要求的平均年龄，保留到小数点后两位。
*/
#include <stdio.h>
int main()
{
	int n, sum = 0, i, a;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d\n", &a),
		sum += a;
	printf("%.2lf\n", (double)sum / n);
	return 0;
}

