#include <stdio.h>
int main(void)
{
	int N, num = 0, cnt = 0, i, j = 2;

	scanf_s("%d", &N);

	for (i = 0; i < N; i++) {
		scanf_s("%d", &num);

		for (j = 2; j < num; j++) // j�� �Ҽ����, j=num�� �� for�� �����.
			if (num % j == 0)
				break;

		if (j == num) // �̷��� �ϸ� num=1,2 ���� ���� �� �ص� �ǰ� flag �� �ʿ䵵 ����.
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}