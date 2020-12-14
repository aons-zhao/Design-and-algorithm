/*题目：
    2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
输入：
    输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。
输出：
    输出1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。*/
#include <stdio.h>

int main() {
    int n, sum, x = 0, y = 0, z = 0;
    int num_gold, num_silver, num_bronze;
    scanf("%d", &n);
    for (int i = 0, m; i < n; i++) {
        scanf("%d %d %d", &num_gold, &num_silver, &num_bronze);
        x += num_gold;
        y += num_silver;
        z += num_bronze;
    }
    sum = x + y + z;
    printf("%d %d %d %d", x, y, z, sum);
    return 0;
}
