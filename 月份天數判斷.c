#include <stdio.h>

int main() {
    int month;

    // ���ܨϥΪ̿�J���
    printf("�п�J����]1-12�^�G");

    // Ū���ϥΪ̿�J�����
    if (scanf("%d", &month) != 1) {
        printf("��J�L�ġA�нT�O��J���O�Ʀr�I\n");
        return 1;  // ���~�X�A�{������
    }

    // �ϥ� switch �P�_�������ܤѼ�
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d �릳 31 ��\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("%d �릳 30 ��\n", month);
            break;
        case 2:
            printf("2 �릳 28 ��\n");
            break;
        default:
            printf("�L�Ī����\n");
            break;
    }

    return 0;
}

