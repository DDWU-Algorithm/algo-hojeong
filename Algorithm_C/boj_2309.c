#include <stdio.h>
int main(void)
{
	int real[7] = { 0, };
	int check[9] = { 0, }; // ���� �������� ����
	int fake[9] = { 0, }; // 9�� �Է� ����
	int sum = 0, over = 0, i, j, realIndex = 0, temp, flag = 0;

	for (i = 0; i < 9; i++) {
		scanf_s("%d", &fake[i]);
		sum += fake[i];
	}
	over = sum - 100; // �ʰ��� �� ���. ���� ����
	// �ʰ��� ���� � �� ���� ������ ���ϰ� ����.

	// ���� 0���� �ʱ�ȭ �߾��µ�, 1�� �� 2�� ���� ��.
	// 9�� �� �� ���� 2���� ������ ����.
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (fake[i] + fake[j] == over) { 
				check[i] = 1;
				check[j] = 1;
				flag = 1;
				break;
			}
		}
		if (flag) break; // break�� �����ؾ���. break�� �ϳ��� �ݺ��� �ϳ� Ż���ϱ� ����.
		// �� �κ� ������ Ʋ�Ⱦ���.
	}

	// �� �迭�� ����.
	for (i = 0; i < 9; i++) {
		if (check[i] == 0) {
			real[realIndex++] = fake[i];
		}
	}

	// �������� ����
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 7; j++) { // [i]�� ���ϸ鼭 �� ���� �� ������.
			if (real[i] > real[j]) {
				temp = real[i];
				real[i] = real[j];
				real[j] = temp;
			}
		}
	}

	// �� 7�� ���
	for (i = 0; i < 7; i++)
		printf("%d\n", real[i]);

	return 0;

}