#include<stdio.h>
#include <math.h>
int main()
{
    double a, b, c, m, n;
    scanf("%lf %lf %lf", &a, &b, &c);
    n = b * b - (4 * a * c);
    if (n == 0)
        printf("x1=x2=%.5lf\n", -b / (2 * a));
    if (n > 0)
        printf("x1=%.5lf;", (-b + sqrt(n)) / (2 * a)),
        printf("x2=%.5lf\n", (-b - sqrt(n)) / (2 * a));
    if (n < 0)
        m = sqrt(4 * a * c - b * b) / (2 * a),
        printf("x1=%.5lf+%.5lfi;", 0-b / (2 * a) , m),
        printf("x2=%.5lf-%.5lfi\n", 0-b / (2 * a) , m);
    return 0;
}
