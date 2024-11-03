#include <stdio.h>

// 函式：使用指標交換兩個變數的值
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // 提示使用者輸入兩個數
    printf("請輸入兩個數：");

    // 讀取使用者輸入的兩個數
    if (scanf("%d %d", &a, &b) != 2) {
        printf("輸入無效，請確保輸入的是兩個整數！\n");
        return 1;  // 錯誤碼，程式結束
    }

    // 顯示交換前的數值
    printf("交換前，a = %d, b = %d\n", a, b);

    // 調用 swap 函式來交換數值
    swap(&a, &b);

    // 顯示交換後的數值
    printf("交換後，a = %d, b = %d\n", a, b);

    return 0;
}


