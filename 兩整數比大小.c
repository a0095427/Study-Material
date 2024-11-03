#include <stdio.h>

int main() {
    int a, b;

    // 提示使用者輸入兩個整數
    printf("請輸入兩個整數：");

    // 讀取使用者輸入的兩個整數
    if (scanf("%d %d", &a, &b) != 2) {
        printf("輸入無效，請確保輸入的是兩個整數！\n");
        return 1;  // 錯誤碼，程式結束
    }

    // 找出較大的數
    int max = (a > b) ? a : b;

    // 顯示結果
    printf("最大值為：%d\n", max);

    return 0;
}

