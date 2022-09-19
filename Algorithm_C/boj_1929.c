#include <stdio.h>
int isprime[1000001];
int main(void)
{
	int m, n;
	isprime[1] = 1;

	scanf_s("%d %d", &m, &n);

	// 2의 배수는 값을 전부 1로 바꾼다.
	// 3의 배수는 값을 전부 1로 바꾼다.
	// 무언가의 배수는 당연히 소수가 아니다. 그걸 표시하는 것.
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