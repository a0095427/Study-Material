#include <stdio.h>

int main() {
    int month;

    // 提示使用者輸入月份
    printf("請輸入月份（1-12）：");

    // 讀取使用者輸入的月份
    if (scanf("%d", &month) != 1) {
        printf("輸入無效，請確保輸入的是數字！\n");
        return 1;  // 錯誤碼，程式結束
    }

    // 使用 switch 判斷月份並顯示天數
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d 月有 31 天\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("%d 月有 30 天\n", month);
            break;
        case 2:
            printf("2 月有 28 天\n");
            break;
        default:
            printf("無效的月份\n");
            break;
    }

    return 0;
}

