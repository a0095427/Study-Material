#include <stdio.h>

// �禡�G�ϥΫ��Х洫����ܼƪ���
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // ���ܨϥΪ̿�J��Ӽ�
    printf("�п�J��ӼơG");

    // Ū���ϥΪ̿�J����Ӽ�
    if (scanf("%d %d", &a, &b) != 2) {
        printf("��J�L�ġA�нT�O��J���O��Ӿ�ơI\n");
        return 1;  // ���~�X�A�{������
    }

    // ��ܥ洫�e���ƭ�
    printf("�洫�e�Aa = %d, b = %d\n", a, b);

    // �ե� swap �禡�ӥ洫�ƭ�
    swap(&a, &b);

    // ��ܥ洫�᪺�ƭ�
    printf("�洫��Aa = %d, b = %d\n", a, b);

    return 0;
}


