#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 7;

    // ��l���H���ƥͦ���
    srand(time(0));
    target = rand() % 100 + 1;  // �ͦ� 1 �� 100 �������H����

    printf("�w��Ө�q�Ʀr�C���I�ڤw�g��F�@�� 1 �� 100 �������Ʀr�C\n");
    printf("�A�� %d �����|�Ӳq���o�ӼƦr�C\n", attempts);

    // ���ϥΪ̦� 7 ���q�������|
    for (int i = 1; i <= attempts; i++) {
        printf("�� %d ���q���G", i);
        scanf("%d", &guess);

        if (guess < target) {
            printf("�q�p�F�I\n");
        } else if (guess > target) {
            printf("�q�j�F�I\n");
        } else {
            printf("���ߡI�A�q��F�I\n");
            return 0;  // �����{��
        }
    }

    // �Y�Χ��Ҧ����|�����q��
    printf("�ܿ�ѡA�A�S���q���A���T���׬O %d�C\n", target);
    return 0;
}

