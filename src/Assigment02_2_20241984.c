#include <stdio.h>

int main() {
    double area = 1.0;  // �ʱ� ������ 1�� ����
    double reduction = 0.5;  // ���� ������ ������ 1/2�� �پ��
    double target_area = area / 100;  // ��ǥ ����
    int count = 0;  // ���� Ƚ��

    // 1/100�� �� �� ���� �ݺ�
    while (area > target_area) {
        area *= reduction;  // ������ �������� ����
        count++;  // ���� Ƚ�� ����
    }

    // ��� ���
    printf("���̸� %d�� ����� ���� ������ 1/100�� �پ��ϴ�.\n", count);

    return 0;
}