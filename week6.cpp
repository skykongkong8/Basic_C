#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc 함수를 불러오는 것

int main() {
	int N;
	scanf("%d", &N);
	int* ptr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf("%d", &ptr[i]);
	}
	int sum = 0;
	for (int j = 0; j < N; j++) {
		sum += ptr[j];
	}
	printf("%d", sum / N);
	return 0;
}


//동적할당
//int N;
//scanf("%d", &N);
//int* ptr = (int*)malloc(N * sizeof(int));
//for (int i = 0; i < N; i++) {
//	ptr[i] = 5 * (i + 1);
//}

//
//
//void printArr(int arr[][4]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void reverseArr(int arr[][4]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 1; j++) {
//			int temp = *(*(arr + i) + j);
//			*(*(arr + i) + j) = *(*(arr + i) + 3 - j);
//			*(*(arr + i) + 3 - j) = temp;
//		}
//	}
//
//}
//
//
//int main() {
//	int arr[3][4] = {
//		{3,1,5,9},
//		{-1,0,20,48},
//		{30,8,-5,6} };
//	printArr(arr);
//	printf("\n");
//	reverseArr(arr);
//	printArr(arr);
//	return 0;
//}
//



//
//void BubbleSort(int arr[]) {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10 - i - 1; j++) {
//			if (*(arr + j) > * (arr + j + 1)) {
//				int temp;
//				temp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int a[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	BubbleSort(a);
//	for (int i = 0; i < 10; i++) {
//		printf("%d", a[i]);
//	}
//	return 0;
//}

