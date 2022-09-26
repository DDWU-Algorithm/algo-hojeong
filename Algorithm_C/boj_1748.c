#include <stdio.h>
int main(void)
{
	int N, sum = 0;

	scanf_s("%d", &N);

	// 1의 자릿수 가진 수 세고, 10의 자릿수 가진 수 세고 ..
	// 전체 입력되는 수를 한 자리씩 다 따로 보는 것이다. 1의 자리는 N개, 10의 자리는 N-개, ..
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