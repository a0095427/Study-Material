#include <stdio.h>

void determine_triangle_type(int a, int b, int c) {
    // �ˬd�O�_�ŦX�T���Τ�����
    if (a + b > c && a + c > b && b + c > a) {
        // �P�_�T���Ϊ�����
        if (a == b && b == c) {
            printf("�ӤT���άO���T���ΡC\n");
        } else if (a == b || b == c || a == c) {
            printf("�ӤT���άO���y�T���ΡC\n");
        } else {
            printf("�ӤT���άO������T���ΡC\n");
        }
    } else {
        printf("�L�k�c���T���ΡC\n");
    }
}

int main() {
    int a, b, c;
    
    // ���ܨϥΪ̿�J�T���
    printf("�п�J�T���Ϊ��T��� (�H�Ů���j)�G");
    scanf("%d %d %d", &a, &b, &c);
    
    // �P�_�T��������
    determine_triangle_type(a, b, c);

    return 0;
}

