#include <stdio.h>

void determine_triangle_type(int a, int b, int c) {
    // 檢查是否符合三角形不等式
    if (a + b > c && a + c > b && b + c > a) {
        // 判斷三角形的類型
        if (a == b && b == c) {
            printf("該三角形是正三角形。\n");
        } else if (a == b || b == c || a == c) {
            printf("該三角形是等腰三角形。\n");
        } else {
            printf("該三角形是不等邊三角形。\n");
        }
    } else {
        printf("無法構成三角形。\n");
    }
}

int main() {
    int a, b, c;
    
    // 提示使用者輸入三邊長
    printf("請輸入三角形的三邊長 (以空格分隔)：");
    scanf("%d %d %d", &a, &b, &c);
    
    // 判斷三角形類型
    determine_triangle_type(a, b, c);

    return 0;
}

