#include <stdio.h>
//输入两个整数，第一个为确诊数，第二个为死亡数；输出死亡率，以百分数形式输出，精确到小数点后3位。 
int main()
{
	int a, b;
	scanf("%d%d",&a, &b);
	printf("%.3f%%",(float)b/a*100);  //输出%可以使用printf(“%%”);
	return 0;
}
