#include <stdio.h>

int binarySearch(const int array[], int low, int high, int key);

int main(void) {
    int a[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int key, result;

    printf("Enter an integer search key: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, 9, key);

    if (result != -1) {
        printf("Found value in element %d\n", result);
    }
    else {
        printf("Value not found\n");
    }

    return 0;
}


int binarySearch(const int array[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == key) {
            return mid;
        }
        else if (array[mid] > key) {
            return binarySearch(array, low, mid - 1, key);
        }
        else {
            return binarySearch(array, mid + 1, high, key);
        }
    }

    return -1;
}
