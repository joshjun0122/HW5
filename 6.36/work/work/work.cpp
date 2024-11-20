/*#include <stdio.h>
#include <string.h>

int main() {
    //const char testString[] = "Hello, world!";
    char testString[] = "Hel";
    char temp[4] ;
    char temp2[4];

    int length = strlen(testString);
    strcpy(temp, testString);

    for (int i = 0;i < length;i = i + 1) {
        temp2[i] = testString[length - i - 1];  // 從後往前取字元
    }

    temp2[length] = '\0';
    printf("Original string: %s\n", testString);
    printf("Reversed string: %s\n", temp2);
    printf("\n");
    return 0;
}*/

#include <stdio.h>

// 定義遞歸函數
void stringReverse(const char* str) {
    if (*str == '\0') {
        // 遇到空字符時停止遞歸
        return;
    }
    // 遞歸地處理下一個字符
    stringReverse(str + 1);
    // 打印當前字符
    putchar(*str);
}

int main() {
    // 測試用例
    const char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str);
    printf("\n");
    return 0;
}
