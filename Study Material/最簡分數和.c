#include <stdio.h>

// �p��̤j���]�ơ]GCD�^�ϥ�����۰��k
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Ū���øѪR���ơB�p��M�äƬ���²����
int main() {
    int num1, den1, num2, den2;
    
    // ��J�Ĥ@�Ӥ���
    printf("�п�J�Ĥ@�Ӥ��� (�榡�G���l/����)�G");
    scanf("%d/%d", &num1, &den1);

    // ��J�ĤG�Ӥ���
    printf("�п�J�ĤG�Ӥ��� (�榡�G���l/����)�G");
    scanf("%d/%d", &num2, &den2);

    // �p��M�����l�M����
    int numerator = num1 * den2 + num2 * den1;
    int denominator = den1 * den2;

    // ²�Ƶ��G����
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // ��ܵ��G
    printf("��Ӥ��ƪ��M���G%d/%d\n", numerator, denominator);

    return 0;
}

