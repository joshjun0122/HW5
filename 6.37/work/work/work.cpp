#include <stdio.h>
#include <string.h>

// 遞迴函數，找出陣列的最大值
int recursiveMaximum(int arr[], int size) {
    // 基底條件：如果陣列中只有一個元素，直接返回該元素
    if (size == 1) {
        return arr[0];
    }

    // 遞迴計算剩餘陣列的最大值
    int maxOfRest = recursiveMaximum(arr, size - 1);

    // 返回當前元素與剩餘陣列最大值的較大者 是:rr[size - 1] 不是:maxOfRest
    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;   //***
}

int main() {
    // 測試陣列
    int  arr[] = { 3, 5, 7, 2, 8, 1,9};
    int size = 7;
    //int size = sizeof(arr) / sizeof(arr[0]);  // 計算陣列大小
    int max = recursiveMaximum(arr, size);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
