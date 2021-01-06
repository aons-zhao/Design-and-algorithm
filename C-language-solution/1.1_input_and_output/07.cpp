#include<stdio.h>
//读入一个双精度浮点数，分别按输出格式“%f”，“%f”保留5位小数，“%e”和“%g”的形式输出这个整数，每次在单独一行上输出。
int main()
{
    double i;
    scanf("%lf",&i);
    printf("%f\n",i);
    printf("%.5f\n",i);
    printf("%e\n",i);
    printf("%g\n",i);
    return 0;
}
