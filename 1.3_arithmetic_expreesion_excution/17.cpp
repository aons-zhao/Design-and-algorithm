/*平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少。
输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。
输出三角形的面积，精确到小数点后两位。*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, p, s;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2lf\n", s);
    return 0;
}
