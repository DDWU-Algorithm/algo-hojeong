#include <stdio.h>
int main(void)
{
	int real[7] = { 0, };
	int check[9] = { 0, }; // 찐을 가려내기 위함
	int fake[9] = { 0, }; // 9명 입력 받음
	int sum = 0, over = 0, i, j, realIndex = 0, temp, flag = 0;

	for (i = 0; i < 9; i++) {
		scanf_s("%d", &fake[i]);
		sum += fake[i];
	}
	over = sum - 100; // 초과한 양 계산. 음수 주의
	// 초과한 양이 어떤 두 수의 합인지 구하고 싶음.

	// 값을 0으로 초기화 했었는데, 1인 거 2개 빼면 됨.
	// 9개 중 뺄 수는 2개로 정해져 있음.
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (fake[i] + fake[j] == over) { 
				check[i] = 1;
				check[j] = 1;
				flag = 1;
				break;
			}
		}
		if (flag) break; // break문 주의해야함. break문 하나당 반복문 하나 탈출하기 때문.
		// 이 부분 때문에 틀렸었음.
	}

	// 찐 배열에 넣음.
	for (i = 0; i < 9; i++) {
		if (check[i] == 0) {
			real[realIndex++] = fake[i];
		}
	}

	// 오름차순 정렬
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 7; j++) { // [i]랑 비교하면서 젤 작은 거 앞으로.
			if (real[i] > real[j]) {
				temp = real[i];
				real[i] = real[j];
				real[j] = temp;
			}
		}
	}

	// 찐 7개 출력
	for (i = 0; i < 7; i++)
		printf("%d\n", real[i]);

	return 0;

}