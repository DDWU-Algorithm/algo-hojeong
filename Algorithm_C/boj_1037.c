#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, count, i, j, temp;
	int* arr;

	scanf_s("%d", &count);
	arr = (int*)malloc(sizeof(int) * count);
	
	// 배열에 넣고
	for (i = 0; i < count; i++) {
		scanf_s("%d", arr + i);
	}

	//내림차순 or 오름차순 정렬해야함 -> sorting algorithm(순차정렬)
	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++) {
			if (arr[i] < arr[j]) { //이 작업은 내림차순
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	if (count == 1) { //약수 개수가 1개 -> 제곱수 4, 9
		n = arr[0] * arr[0];
	} else { //짝수 홀수 상관 x -> 젤 앞 젤 뒤 곱
		n = arr[0] * arr[count - 1];
	}

	free(arr);

	printf("%d", n);

	return 0;
}