#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("請輸入正整數：");

    // 確認輸入是否為正整數
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("輸入無效，請輸入一個正整數！\n");
        return 1;  // 錯誤碼，程式結束
    }

    // 計算從 1 到 n 的總和
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // 顯示結果
    printf("1 到 %d 的總和為：%d\n", n, sum);

    return 0;
}

