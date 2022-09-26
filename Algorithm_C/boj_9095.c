#include <stdio.h>
int main(void)
{
	//n 최대 11이라서 배열로 값을 미리 다 넣어도 됨. -> 다 넣고 해당 값 = 인덱스로 출력만 하게 함.
	int T, n, arr[11] = { 0, };
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	//n>3일 때 점화식을 이용할 거라서 초기값들은 넣어놓는 거임.

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &n);
		printf("%d\n", arr[n]);
	}
	return 0;
}