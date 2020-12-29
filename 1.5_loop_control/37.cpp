/*题目：
    雇佣兵的体力最大值为M，初始体力值为0、战斗力为N、拥有X个能量元素。当雇佣兵的体力值恰好为M时，才可以参加一个为期M天的战斗期，战斗期结束体力值将为0。
    在同一个战斗期内，雇佣兵每连续战斗n天，战斗力就会上升1点，n为当前战斗期开始时的战斗力。一个战斗期结束后，雇佣兵需要用若干个能量元素使其体力恢复到
    最大值M，从而参加下一个战斗期。每个能量元素恢复的体力值不超过当前的战斗力。每个能量元素只能使用一次。请问：雇佣兵的战斗力最大可以到达多少。
输入：
    一行，包括三个整数M、N、X，相邻两个整数之间用单个空格隔开。M、N、X均为不超过10000的正整数。
输出：
    一个整数，为雇佣兵的最大战斗力。*/
#include<stdio.h>

int main() {
    int body_str_max, combat_force_max, energy, temp, val;
    scanf("%d%d%d", &body_str_max, &combat_force_max, &energy);
    temp = body_str_max;
    while (1) {
        body_str_max = 0;
        while (body_str_max < temp) {
            body_str_max = body_str_max + combat_force_max;
            energy--;
            if (energy == 0 && body_str_max < temp) {
                printf("%d", combat_force_max);
                return 0;
            }
        }
        body_str_max = temp;
        val = combat_force_max;
        while (body_str_max >= 0) {
            body_str_max = body_str_max - val;
            if (body_str_max >= 0) combat_force_max++;
        }
        if (combat_force_max == (temp + 1)) {
            printf("%d", combat_force_max);
            return 0;
        }
    }
}


