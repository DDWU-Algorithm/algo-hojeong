#include <stdio.h>
int main(void)
{
	int N, num = 0, cnt = 0, i, j = 2;

	scanf_s("%d", &N);

	for (i = 0; i < N; i++) {
		scanf_s("%d", &num);

		for (j = 2; j < num; j++) // j가 소수라면, j=num일 때 for문 종료됨.
			if (num % j == 0)
				break;

		if (j == num) // 이렇게 하면 num=1,2 따로 구분 안 해도 되고 flag 쓸 필요도 없음.
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}