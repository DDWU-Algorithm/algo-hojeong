#include <stdio.h>
#define MAX_NUM 1000001
int arr[MAX_NUM]; // arr[A]: f(A)의 값, 즉 A의 모든 약수를 더한 값
long long sum[MAX_NUM]; // sum[x]: g(x)의 값, 즉 x보다 작거나 같은 모든 자연수 y의 f(y)값을 더한 값
// 배열 전역 변수로 선언해야 함. 스택 영역을 초과한다고 나와서 힙으로 옮김.
// 그리고 전역 변수로 배열 선언하면 값이 다 자동으로 0으로 초기화됨.
// 지역 변수 배열 선언은 초기화 안 하면 쓰레기 값 들어가 있고, 값 하나라도 초기화 시 나머지 초기화 안 한 값들에는 0 들어감.
// 지역 변수 배열 값 모두 0으로 초기화 하고 싶으면 { 0, } 이렇게 해줌.

int main(void) {

    // 1의 배수의 값에는 다 1를 약수로 갖기 때문에 1를 다 더해준다.
    // 2의 배수의 값에는 다 2를 약수로 갖기 때문에 2를 다 더해준다.
    // 4의 배수의 값에는 다 4를 약수로 갖기 때문에 4를 다 더해준다.
    // 이런식으로 배열 인덱스 값이 i의 배수일 때마다 i를 더해준다. 
    for (int i = 1; i < MAX_NUM; i++) {
        for (int j = 1; i * j < MAX_NUM; j++) {
            arr[i * j] += i;
        }
    }

    // 자연수 1~N까지 약수의 합은 N-1까지의 합에다가 현재 N의 약수의 합을 더하면 된다. 
    // gsum을 구할 때마다 arr[1]부터 쭉 더하는 게 아니라, 누적 값으로 더해서 미리 gsum 배열을 만들어 놓는다. 
    sum[1] = arr[1];
    for (int i = 2; i < MAX_NUM; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }

    int T;
    scanf_s("%d", &T);

    int N;
    for (int i = 0; i < T; i++) {
        scanf_s("%d", &N);
        printf("%lld\n", sum[N]);
    }
    return 0;
}

//#include <stdio.h>
//int main(void) {
//	int N, T;
//	long long gsum;
//
//	scanf_s("%d", &T);
//	for (int i = 0; i < T; i++) {
//		scanf_s("%d", &N);
//
//		gsum = 0;
//		for (int i = 1; i <= N; i++) {
//			gsum += (long long)(N / i) * i;
//		}
//		printf("%lld\n", gsum);
//	}
//
//	return 0;
//}