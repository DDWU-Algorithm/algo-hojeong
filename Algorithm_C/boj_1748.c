#include <stdio.h>
int main(void)
{
	int N, sum = 0;

	scanf_s("%d", &N);

	// 1�� �ڸ��� ���� �� ����, 10�� �ڸ��� ���� �� ���� ..
	// ��ü �ԷµǴ� ���� �� �ڸ��� �� ���� ���� ���̴�. 1�� �ڸ��� N��, 10�� �ڸ��� N-��, ..
	for (int i = 1; i <= N; i *= 10) {
		sum += N - i + 1;
	}
	printf("%d", sum);
	return 0;
}

//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int N, totalSum = 0, part = 0, subSum = 0;
//
//	scanf_s("%d", &N);
//
//	for (int i = 1; i <= N; i++) {
//		if (i == pow(10, part)) {
//			subSum++;
//			part++;
//		}
//		totalSum += subSum;
//	}
//	printf("%d", totalSum);
//	return 0;
//}