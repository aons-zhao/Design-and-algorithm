/*题目：根据参数，画出矩形。
输入：一行，包括四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；
	  第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
输出：画出的图形。*/

#include<stdio.h>
int main()
{
	int a, b, c, d, x, y;
	char m;
	scanf("%d %d %c %d", &x, &y, &m, &d);
	for (b = 1; b <= x; b++)
	{
		for (a = 1; a <= y; a++)
		{
			if (b == 1 || b == x)
			{
				printf("%c", m);
				if (a == y)
					printf("\n");
			}
			if (b > 1 && b < x)
			{
				if (d == 1)
				{
					printf("%c", m);
					if (a == y)
						printf("\n");
				}
				if (d == 0)
				{
					if (a == 1 || a == y){
						printf("%c", m);
					}
					if (a > 1 && a < y) {
						printf(" ");
					}
					if (a == y) {
						printf("\n");
					}
				}
			}
		}
	}
}
