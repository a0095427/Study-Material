#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // ���ܨϥΪ̿�J��Ӿ��
    printf("�п�J�Ĥ@�Ӿ�ơG");
    scanf("%d", &num1);
    printf("�п�J�ĤG�Ӿ�ơG");
    scanf("%d", &num2);

    printf("�洫�e�Gnum1 = %d, num2 = %d\n", num1, num2);

    // �ϥΫ��Х洫��Ӽ�
    swap(&num1, &num2);

    printf("�洫��Gnum1 = %d, num2 = %d\n", num1, num2);

    // �p��M�P�t
    int sum = num1 + num2;
    int diff = num1 - num2;

    // ��ܩM�P�t
    printf("�M�G%d\n", sum);
    printf("�t�G%d\n", diff);

    return 0;
}

