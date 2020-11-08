#include <stdio.h>
//输入两个电阻阻抗大小，浮点型，以一个空格分开。输出并联之后的阻抗大小，结果保留小数点后2位。 
int main()
{
	float a, b, R;
	scanf("%f %f",&a,&b);
	R=1/(1/a + 1/b);
	printf("%.2f",R);
	return 0;
}
