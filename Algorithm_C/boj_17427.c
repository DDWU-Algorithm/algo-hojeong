#include <stdio.h>
int main(void) {
	int N;
	long long gsum = 0;

	scanf_s("%d", &N);

	// ����� ��ü �� �����ϰ� �� ���� ���ϴ� �����̴�. ����� �� 1,2,3 .. �� ������ ���� ���Ѵ�. -> f, g �� ���� ������ �ʰ� ��.
	// N ������ �ڿ��� i�� ������ N/i���̴�.
	// ���� ��� 3�� ������� �� 3�� ����� ���� �ǰ�, 10(N) �ȿ� 3�� ����� ������ 3�� ����� ���ԵǴ� ������.
	// ���� * �� = (N / i) * i
	for (int i = 1; i <= N; i++) {
		gsum += (long long)(N / i) * i;
	}
	printf("%lld", gsum);

	return 0;
}
//#include <math.h>
//int fsum(int num)
//{
//	int sum = 0, i;
//
//	for (i = 1; i <= sqrt(num); i++) {
//		if (num % i == 0) {
//			if (pow(i,2) == num) {
//				sum += i;
//			}
//			else {
//				sum += i;
//				sum += (num / i);
//			}
//		}
//	}
//	return sum;
//}

//int main(void)
//{
//	int n, i;
//	long long gsum = 1;
//
//	scanf_s("%d", &n);
//
//	for (i = 2; i <= n; i++) {
//		gsum += fsum(i);
//	}
//
//	printf("%d\n", gsum);
//
//	return 0;
//}