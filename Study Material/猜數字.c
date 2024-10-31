#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 7;

    // 初始化隨機數生成器
    srand(time(0));
    target = rand() % 100 + 1;  // 生成 1 到 100 之間的隨機數

    printf("歡迎來到猜數字遊戲！我已經選了一個 1 到 100 之間的數字。\n");
    printf("你有 %d 次機會來猜中這個數字。\n", attempts);

    // 讓使用者有 7 次猜測的機會
    for (int i = 1; i <= attempts; i++) {
        printf("第 %d 次猜測：", i);
        scanf("%d", &guess);

        if (guess < target) {
            printf("猜小了！\n");
        } else if (guess > target) {
            printf("猜大了！\n");
        } else {
            printf("恭喜！你猜對了！\n");
            return 0;  // 結束程式
        }
    }

    // 若用完所有機會仍未猜中
    printf("很遺憾，你沒有猜中，正確答案是 %d。\n", target);
    return 0;
}

