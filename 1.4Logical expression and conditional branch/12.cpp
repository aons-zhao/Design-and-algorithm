/*在校园里,没有自行车,上课办事会很不方便。但实际上,并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、
锁车等,这要耽误一些时间.假设找到自行车,开锁并骑上自行车的时间为27秒;停车加锁车的时间为23秒;步行每秒行走1.2米,
骑车每秒行走3.0米。请判断走不同的距离去办事,是骑车快还是走路快。
输入：包含一个整数，表示一次办事要行走的距离,单位为米。
输出：如果骑车快,输出一行"Bike";如果走路快,输出一行"Walk";如果一样快,输出一行"All"。*/
#include<stdio.h>
int main()
{
	double a, t1, t2;
	scanf("%lf", &a);
	t1 = a / 1.2;
	t2 = a / 3.0 + 27 + 23;
	if (t1 == t2)    printf("All");
	if (t1 > t2)    printf("Bike");
	if (t1 < t2)    printf("Walk");
	return 0;
}
