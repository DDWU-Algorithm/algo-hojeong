#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);
	// 1,2�� ���� 3,4�� ����.
	// �������� �켱����, �������� �ǹ� �� �� �ִ�. 

	return 0;
}