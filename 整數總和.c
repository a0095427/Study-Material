#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("�п�J����ơG");

    // �T�{��J�O�_�������
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("��J�L�ġA�п�J�@�ӥ���ơI\n");
        return 1;  // ���~�X�A�{������
    }

    // �p��q 1 �� n ���`�M
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // ��ܵ��G
    printf("1 �� %d ���`�M���G%d\n", n, sum);

    return 0;
}

