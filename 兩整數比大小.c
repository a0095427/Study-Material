#include <stdio.h>

int main() {
    int a, b;

    // ���ܨϥΪ̿�J��Ӿ��
    printf("�п�J��Ӿ�ơG");

    // Ū���ϥΪ̿�J����Ӿ��
    if (scanf("%d %d", &a, &b) != 2) {
        printf("��J�L�ġA�нT�O��J���O��Ӿ�ơI\n");
        return 1;  // ���~�X�A�{������
    }

    // ��X���j����
    int max = (a > b) ? a : b;

    // ��ܵ��G
    printf("�̤j�Ȭ��G%d\n", max);

    return 0;
}

