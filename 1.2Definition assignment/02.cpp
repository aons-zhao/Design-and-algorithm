#include <stdio.h>
//分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
int main()
{
	printf("%d %d",sizeof(float),sizeof(double));
	return 0;
}
