#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // 提示使用者輸入兩個整數
    printf("請輸入第一個整數：");
    scanf("%d", &num1);
    printf("請輸入第二個整數：");
    scanf("%d", &num2);

    printf("交換前：num1 = %d, num2 = %d\n", num1, num2);

    // 使用指標交換兩個數
    swap(&num1, &num2);

    printf("交換後：num1 = %d, num2 = %d\n", num1, num2);

    // 計算和與差
    int sum = num1 + num2;
    int diff = num1 - num2;

    // 顯示和與差
    printf("和：%d\n", sum);
    printf("差：%d\n", diff);

    return 0;
}

