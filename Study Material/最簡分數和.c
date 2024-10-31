#include <stdio.h>

// 計算最大公因數（GCD）使用輾轉相除法
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 讀取並解析分數、計算和並化為最簡分數
int main() {
    int num1, den1, num2, den2;
    
    // 輸入第一個分數
    printf("請輸入第一個分數 (格式：分子/分母)：");
    scanf("%d/%d", &num1, &den1);

    // 輸入第二個分數
    printf("請輸入第二個分數 (格式：分子/分母)：");
    scanf("%d/%d", &num2, &den2);

    // 計算和的分子和分母
    int numerator = num1 * den2 + num2 * den1;
    int denominator = den1 * den2;

    // 簡化結果分數
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // 顯示結果
    printf("兩個分數的和為：%d/%d\n", numerator, denominator);

    return 0;
}

