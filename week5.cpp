#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMax(int arr[], int *result) {//�Ķ���ͷ� �迭, �׸��� result�� �����͸� �޴´�
	int max_cand = arr[0];//�ִ��� �̱� ���� �迭 �� ������ ���� ������ ����
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max_cand) {//�ݺ��� ���鼭 ������ ������ ū ���� ������
			max_cand = arr[i];//�� ������Ʈ �ϱ�
		}
	}
	*result = max_cand;//result�� ������ ����� ���� �ִ� ���� ����
	return *result;
}

int main() {
	
	int arr[5];//�迭 ����-���ķδ� []�̰� �Ƚᵵ �Ǵ°���!! C�� �ڷ����� ���� ������ �Ⱦ����� ���� �޶����� �� ����.
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	int result;

	findMax(arr, &result);//�迭�� �ְ�, 

	printf("%d\n", result);

	return 0;
}



//�� Ʋ���� �ɱ�? ���� 1673(�ϴ��� while������)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int stamp = 0;
//int chicken(int n, int k) {
//	int orderable_chicken = 0;
//	int coupon = n;
//	while (coupon != 0 || stamp >= k) { //���ǹ����� or�� ������ �� ��, || �� �� ���ش�!, �����̹Ƿ� ��ȣ ���ش�,,,��
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



//���� ����Լ���������17478
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void what_is_ref(int n, int N) {
//	if (n == 0) {
//		for (int i = 0; i < 4 * (N - n); i++) {
//			printf("_");
//		}
//		printf("\"����Լ��� ������?\"\n");
//		for (int i = 0; i < 4 * (N - n); i++) {
//			printf("_");
//		}
//		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
//		return;
//	}
//
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("\"����Լ��� ������?\"\n");
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
//	for (int i = 0; i < 4 * (N - n); i++) {
//		printf("_");
//	}
//	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
//	what_is_ref(n - 1, N);
//}
//
//void rago_answer(int n) {
//	if (n == 0) {
//		printf("��� �亯�Ͽ���.\n");
//		return;
//	}
//	for (int i = n * 4; i > 0; i--) {
//		printf("_");
//	}
//	printf("��� �亯�Ͽ���.\n");
//	rago_answer(n - 1);
//}
//
//
//
//int main() {
//	int n, N;
//	scanf("%d", &n);
//	N = n;
//	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
//	what_is_ref(n, N);
//	rago_answer(n);
//	return 0;
//}
//�ڸ�Ʈ: %c�� ���ڿ��� �ƴ϶� �ϳ��� str�� ��ȯ�ϹǷ� �̷� ��� �׳� void�Լ��� ���ְ�, ����Լ� ���̽����̽��� return; ������ �������� ��,
//���� main�Լ��� printf���ִ� �������� �����ϴ� ���� ����


//������ ����..?
/*int num = 5;
	int *ptr = &num; �����͸� ������ ���� *�� ��������, ������ '������'�� ����� ���� �� ���� �ʴ´�. ������ ����� �� *�� ���� ������ ����� ���� �ǵ帰�ٴ� ���� �ǹ��Ѵ�.

	printf("%d\n", *ptr); ������ ������ �ٿ� ����, ���� ����� �� *�� ���̸� '����Ǿ��ִ� ��'�� �ǹ���
	printf("%p\n", &num); '�ּ�', aka '������'�� ����ϰ��� �� ���� %p�� �����
	printf("%p\n", ptr);*/


//������ �⺻ ����
//
//void sum_and_diff(int num1, int num2, int* sum, int* diff) {/*2.�Լ����� "������ �� �� ��"�� "������ ��ġ �ּ�(2��)"�� �޴´�.(1�� ����� ���� ����)*/
//
//	*sum = num1 + num2; /*3.������ �ּҿ� ���� ���� �ڴ´�*/
//	*diff = num1 - num2; /*3�� ���������� ����*/
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
//	sum_and_diff(num1, num2, &sum, &diff);/*1.�Ķ���ͷ� num1, num2�� ����, ����� sum, diff�� �ּҸ� �޴´�.*/
//	printf("%d %d\n", sum, diff);
//
//	return 0;
//}