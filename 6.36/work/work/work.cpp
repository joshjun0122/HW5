#include <stdio.h>
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
}
