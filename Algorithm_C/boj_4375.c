#include <stdio.h>
int main(void)
{
	int count, input;
	long long key;

	while (scanf_s("%d", &input) != -1) { // 입력은 여러 개, 그리고 c vs에서는 ctrl z \n 세번 눌러야 EOF -1로 인식하고 끝남.
		key = 1;
		count = 1;

		// 나머지의 의미(나머지를 분배해서 구할 수 있다)는 건 이해가 됨.
		// 근데 반복적으로 나머지만 남기고 key 값이 갱신되는데 자릿수가 잘 계산되는 게 신기하고 이해가 잘 안 됨.. 
		// 계속해서 나머지의 값만 보기 때문에 가능한 것 같음.
		// 계속 안 되면 그냥 받아들이기. 안 나눠 떨어지는 앞의 몫은 날리고 나머지만 남긴 후 계산한다.
		while (1) {
			if (key % input != 0) { // 나는 이렇게 != 활용을 좀 해야함. 항상 ==으로 하고 break를 하는 것부터 생각함.
				key = (key % input) * 10 + 1; // 여기서 10430을 활용함. key * 10 + 1 하면 시간 초과 남.
				count++;
			}
			else {
				printf("%d\n", count);
				break;
			}
		}
	}
	return 0;
}