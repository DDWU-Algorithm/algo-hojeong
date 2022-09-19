#include <stdio.h>
int isprime[1000001];
int main(void)
{
	int m, n;
	isprime[1] = 1;

	scanf_s("%d %d", &m, &n);

	// 2�� ����� ���� ���� 1�� �ٲ۴�.
	// 3�� ����� ���� ���� 1�� �ٲ۴�.
	// ������ ����� �翬�� �Ҽ��� �ƴϴ�. �װ� ǥ���ϴ� ��.
	for (int i = 2; i <= n; i++) {
		for (int j = 2; i * j <= n; j++) {
			isprime[i * j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (isprime[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}

//#include <stdio.h>
//int main(void)
//{
//	int m, n, i, j;
//
//	scanf_s("%d %d", &m, &n);
//
//	for (i = m; i <= n; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d\n", i);
//	}
//	return 0;
//}