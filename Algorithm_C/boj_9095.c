#include <stdio.h>
int main(void)
{
	//n �ִ� 11�̶� �迭�� ���� �̸� �� �־ ��. -> �� �ְ� �ش� �� = �ε����� ��¸� �ϰ� ��.
	int T, n, arr[11] = { 0, };
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	//n>3�� �� ��ȭ���� �̿��� �Ŷ� �ʱⰪ���� �־���� ����.

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &n);
		printf("%d\n", arr[n]);
	}
	return 0;
}