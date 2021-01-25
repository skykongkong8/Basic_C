#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMax(int arr[], int *result) {//파라미터로 배열, 그리고 result의 포인터를 받는다
	int max_cand = arr[0];//최댓값을 뽑기 위해 배열 중 임의의 수를 변수에 저장
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max_cand) {//반복문 돌면서 저장한 수보다 큰 값이 나오면
			max_cand = arr[i];//값 업데이트 하기
		}
	}
	*result = max_cand;//result에 실제로 저장된 값을 최댓값 수로 지정
	return *result;
}

int main() {
	
	int arr[5];//배열 선언-이후로는 []이거 안써도 되는거임!! C는 자료형과 같이 쓸때와 안쓸때로 많이 달라지는 것 같다.
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	int result;

	findMax(arr, &result);//배열을 넣고, 

	printf("%d\n", result);

	return 0;
}



//왜 틀리는 걸까? 백준 1673(일단은 while문으로)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int stamp = 0;
//int chicken(int n, int k) {
//	int orderable_chicken = 0;
//	int coupon = n;
//	while (coupon != 0 || stamp >= k) { //조건문에서 or을 쓰고자 할 때, || 두 개 써준다!, 포함이므로 등호 써준다,,,ㅎ
//		if (coupon > 0) {
//			orderable_chicken += coupon;
//			stamp += coupon;
//			coupon = 0;
//		}
//		if (stamp > k) {
//			coupon += stamp / k;
//			stamp = stamp % k;
//		}
//	}
//	return orderable_chicken;
//}
//
//
//
//int main(void) {
//	int N, K;
//	scanf("%d %d", &N, &K);
//	printf("%d", chicken(N, K));
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int stamp = 0;
//int chicken(int n, int k) {
//	int orderable_chicken = 0;
//	int coupon = 0;
//	coupon += n;
//	if (n == 0 & stamp < k) return 0;
//	else {
//		if (stamp >= k) {
//			coupon += stamp / k;
//			stamp = stamp % k;
//		}
//		if (coupon > 0) {
//			orderable_chicken += coupon;
//			stamp += coupon;
//			coupon = 0;
//		}
//		orderable_chicken += chicken(coupon, k);
//	}
//	return orderable_chicken;
//}



//백준 재귀함수가뭔가요17478
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void what_is_ref(int n, int N) {
//	if (n == 0) {
//		for (int i = 0; i < 4 * (N - n); i++) {
//			printf("_");
//		}
//		printf("\"재귀함수가 뭔가요?\"\n");
//		for (int i = 0; i < 4 * (N - n); i++) {
//			printf("_");
//		}
//		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
//		return;
//	}
//
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("\"재귀함수가 뭔가요?\"\n");
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
//	what_is_ref(n - 1, N);
//}
//
//void rago_answer(int n) {
//	if (n == 0) {
//		printf("라고 답변하였지.\n");
//		return;
//	}
//	for (int i = n * 4; i > 0; i--) {
//		printf("_");
//	}
//	printf("라고 답변하였지.\n");
//	rago_answer(n - 1);
//}
//
//
//
//int main() {
//	int n, N;
//	scanf("%d", &n);
//	N = n;
//	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
//	what_is_ref(n, N);
//	rago_answer(n);
//	return 0;
//}
//코멘트: %c는 문자열이 아니라 하나의 str만 반환하므로 이런 경우 그냥 void함수를 써주고, 재귀함수 베이스케이스엔 return; 정도로 마무리한 후,
//직접 main함수에 printf해주는 형식으로 접근하는 것이 좋다


//포인터 개념..?
/*int num = 5;
	int *ptr = &num; 포인터를 선언할 때는 *을 써주지만, 실제로 '포인터'를 사용할 때는 을 쓰지 않는다. 오히려 사용할 때 *을 쓰면 실제로 저장된 값을 건드린다는 것을 의미한다.

	printf("%d\n", *ptr); 위에서 설명한 바와 같이, 직접 사용할 때 *을 붙이면 '저장되어있는 값'을 의미함
	printf("%p\n", &num); '주소', aka '포인터'를 출력하고자 할 떄는 %p를 사용함
	printf("%p\n", ptr);*/


//포인터 기본 예제
//
//void sum_and_diff(int num1, int num2, int* sum, int* diff) {/*2.함수에는 "연산할 수 두 개"와 "저장할 위치 주소(2곳)"를 받는다.(1의 설명과 거의 같음)*/
//
//	*sum = num1 + num2; /*3.선언한 주소에 값을 직접 박는다*/
//	*diff = num1 - num2; /*3과 마찬가지인 상태*/
//}
//
//int main() {
//	/*int num = 5;
//	int *ptr = &num;
//
//	printf("%d\n", *ptr);
//	printf("%p\n", &num);
//	printf("%p\n", ptr);*/
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	int sum, diff;
//
//	sum_and_diff(num1, num2, &sum, &diff);/*1.파라미터로 num1, num2의 값과, 선언된 sum, diff의 주소를 받는다.*/
//	printf("%d %d\n", sum, diff);
//
//	return 0;
//}