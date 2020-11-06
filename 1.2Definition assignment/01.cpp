#include <stdio.h>
//分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
int main()
{
	printf("%d %d",sizeof(int),sizeof(short));
	return 0;
}
