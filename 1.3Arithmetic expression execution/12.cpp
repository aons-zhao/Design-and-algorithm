#include<stdio.h>
//对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π= 3.14。现给定r，求V。
int main()
 {
     double pi=3.14, r, v;
     scanf("%lf",&r);
     v=4.0/3*pi*r*r*r;
     printf("%.2lf",v);
     return 0;
}
