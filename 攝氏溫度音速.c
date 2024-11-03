#include <stdio.h>

int main() {
    float temperature, speed;

    // 提示使用者輸入攝氏溫度
    printf("請輸入攝氏溫度：");

    // 讀取使用者輸入的溫度
    if (scanf("%f", &temperature) != 1) {
        printf("輸入無效，請確保輸入的是數字！\n");
        return 1;  // 錯誤碼，程式結束
    }

    // 計算聲音在空氣中的速度
    speed = 331.3 + 0.606 * temperature;

    // 顯示結果，保留兩位小數
    printf("在 %.2f°C 的空氣中，聲音的速度為：%.2f 米/秒\n", temperature, speed);

    return 0;
}

