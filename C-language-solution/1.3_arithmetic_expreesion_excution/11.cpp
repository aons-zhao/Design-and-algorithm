#include<stdio.h>
//计算两个双精度浮点数a和b的相除的余数，a和b都是正数的。
int main()
 {
     double a,b,r;
     int k;
     scanf("%lf%lf",&a,&b);
     k=a/b;
     r=a-(b*k);
     printf("%g\n",r);
     return 0;
}
