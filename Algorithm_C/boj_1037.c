#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, count, i, j, temp;
	int* arr;

	scanf_s("%d", &count);
	arr = (int*)malloc(sizeof(int) * count);
	
	// �迭�� �ְ�
	for (i = 0; i < count; i++) {
		scanf_s("%d", arr + i);
	}

	//�������� or �������� �����ؾ��� -> sorting algorithm(��������)
	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++) {
			if (arr[i] < arr[j]) { //�� �۾��� ��������
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	if (count == 1) { //��� ������ 1�� -> ������ 4, 9
		n = arr[0] * arr[0];
	} else { //¦�� Ȧ�� ��� x -> �� �� �� �� ��
		n = arr[0] * arr[count - 1];
	}

	free(arr);

	printf("%d", n);

	return 0;
}