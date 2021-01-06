#include<stdio.h>
#include<math.h>
int dia(int n,int a)
{
    return (n>a)?(n-a):0;
}
int main()
{
    int n,x,y,a;
    scanf("%d%d%d",&n,&x,&y);  // 先判断 ? 前面的代码，若为真,则执行 ？后面语句，否则执行 ：后面语句。
    a=y/x;
    if(a*x<y) a=a+1;
    printf("%d\n",dia(n,a));
    return 0;
}
