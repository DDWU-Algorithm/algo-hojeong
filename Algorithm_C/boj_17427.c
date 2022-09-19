#include <stdio.h>
int main(void) {
	int N;
	long long gsum = 0;

	scanf_s("%d", &N);

	// 약수를 전체 다 나열하고 한 번에 더하는 느낌이다. 약수들 중 1,2,3 .. 의 개수로 합을 구한다. -> f, g 를 따로 구하지 않게 됨.
	// N 이하의 자연수 i의 개수는 N/i개이다.
	// 예를 들어 3의 배수들은 다 3을 약수로 갖게 되고, 10(N) 안에 3의 배수의 개수가 3이 약수로 포함되는 개수다.
	// 개수 * 값 = (N / i) * i
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