#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main(void) {
    int dice1, dice2, sum;
    int frequency[SIDES * 2 + 1] = { 0 }; // 用來記錄每種點數出現的次數

    // 初始化隨機數生成器
    srand(time(NULL));    ///rand 會根據隨機數生成器的當前狀態生成一個隨機數(srand(time(NULL)) 設置了隨機數生成器的初始狀態)

    // 模擬投擲兩個骰子 36,000 次
    for (int roll = 0; roll < ROLLS; roll++) {
        dice1 = rand() % SIDES + 1;
        dice2 = rand() % SIDES + 1;
        sum = dice1 + dice2;
        frequency[sum]++;      //出現的次數+1
    }

    // 打印結果
    printf("Sum\tFrequency\n");
    for (int i = 2; i <= SIDES * 2; i++) {
        printf("%d\t%d\n", i, frequency[i]);
    }

    return 0;
}
