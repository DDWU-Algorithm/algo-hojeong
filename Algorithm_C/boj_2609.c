#include <stdio.h>
int main(void)
{
	int n1, n2, x = 0;

	scanf_s("%d %d", &n1, &n2);

	for (int i = 1; i <= n1 && i <= n2; i++) {
		if (n1 % i == 0 && n2 % i == 0) { // ������� ���Ѵ�.
			x = i; // ������� x�� �ִ´�. �ִ� ��������� �ݺ�
		}
	}

	printf("%d\n%d", x, n1 * n2 / x);

	//for (int i = 1; i <= sqrt(n1); i++) {
	//	if (n1 % i == 0) {
	//		if (pow(i, 2) == n1) {
	//			printf("%d \n", i);
	//		}
	//		else {
	//			printf("%d %d \n", i, n1 / i);
	//		}
	//	}
	//}

}