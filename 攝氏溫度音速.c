#include <stdio.h>

int main() {
    float temperature, speed;

    // ���ܨϥΪ̿�J���ū�
    printf("�п�J���ūסG");

    // Ū���ϥΪ̿�J���ū�
    if (scanf("%f", &temperature) != 1) {
        printf("��J�L�ġA�нT�O��J���O�Ʀr�I\n");
        return 1;  // ���~�X�A�{������
    }

    // �p���n���b�Ů𤤪��t��
    speed = 331.3 + 0.606 * temperature;

    // ��ܵ��G�A�O�d���p��
    printf("�b %.2f�XC ���Ů𤤡A�n�����t�׬��G%.2f ��/��\n", temperature, speed);

    return 0;
}

