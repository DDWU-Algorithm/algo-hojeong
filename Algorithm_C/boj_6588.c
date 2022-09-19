#include <stdio.h>
#define MAX 1000001
int isprime[MAX];
int prime[MAX];
int primeIndex;

int main(void)
{
	int n, i, j;
	isprime[1] = 1;

	for (i = 2; i * i < MAX; i++) { // sqrt(1000001)과 같은 의미임.
		if (isprime[i] == 0) {
			prime[primeIndex++] = i; // 소수를 작은 수부터 채움
			//i 자기 자신 제외하고 배수를 제외한다. 그래서 j=1부터 안 하고
			for (j = i; i * j < MAX; j++) { // i=7이면, 7*2, 7*3은 이미 했으므로 7*7부터 체크하는 게 더 빠름.
				isprime[i * j] = 1;
			}
		}
	}

	while (1) {
		scanf_s("%d", &n);
		if (n <= 4)
			break;

		for (i = 1; i < primeIndex; i++) { // i=0일 때 2는 짝수라 어차피 아님. 
			if (isprime[n - prime[i]] == 0) {
				printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
				break;
			}
		}
		if (i == primeIndex)
			printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}

//#include <stdio.h>
//int main(void)
//{
//	int n, left, right, prime1 = 0, prime2 = 0;
//	int i, j, k;
//
//	while (1) {
//		scanf_s("%d", &n);
//		if (n == 0)
//			break;
//
//		left = n / 2;
//		right = n / 2;
//
//		for (i = left; i > 1; i--) {
//			left--;
//			right++;
//			for (j = 2; j < left; j++) {
//				if (left % j == 0)
//					break;
//			}
//			for (k = 2; k < right; k++) {
//				if (right % k == 0)
//					break;
//			}
//			if (j == left && k == right) {
//				prime1 = left;
//				prime2 = right;
//			}
//			if (prime1 == 0 && prime2 == 0)
//				printf("Goldbach's conjecture is wrong.");
//			else
//				printf("%d = %d + %d\n", n, prime1, prime2);
//		}
//
//	}
//	return 0;
//}