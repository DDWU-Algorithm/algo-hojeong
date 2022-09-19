#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);
	// 1,2가 같고 3,4도 같다.
	// 연산자의 우선순위, 나머지의 의미 알 수 있다. 

	return 0;
}