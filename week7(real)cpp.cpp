#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];
	int korean;
	int english;
	int math;
}Student;

int main() {
	
	Student arr[3];
	strcpy(arr[0].name, "�ظ�����");
	strcpy(arr[1].name, "�츣�̿´�");
	strcpy(arr[2].name, "��");
	for (int i = 0; i < 3; i++) {
		//strcpy(Hogwarts[i].name, "���ϴ� �̸�");
		scanf("%d", &arr[i].korean);
		scanf("%d", &arr[i].english);
		scanf("%d", &arr[i].math);
	}
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	for (int j = 0; j < 3; j++) {
		sum1 += arr[j].korean;
		sum2 += arr[j].english;
		sum3 += arr[j].math;
	}
	

	float avg1 = sum1/3, avg2= sum2/3, avg3=sum3/3;

	printf("���� ��� : %d, ���� ���: %d, ���� ���: %d");
	return 0;
}

// ����ü �⺻����--class�����ǰ�?
//typedef struct {
//	char name[20];
//	int code;
//}Book;
//
//int main() {
//	Book Harry_Potter;
//	scanf("%s", Harry_Potter.name);
//	scanf("%d", &Harry_Potter.code);
//
//	Book Lord_of_the_Rings;
//	scanf("%s", Lord_of_the_Rings.name);
//	scanf("%d", &Lord_of_the_Rings.code);
//
//	printf("�ظ� ���� ����: %d %s\n", Harry_Potter.code, Harry_Potter.name);
//	printf("������ ���� ����: %d %s\n", Lord_of_the_Rings.code, Lord_of_the_Rings.name);
//
//	return 0;
//}
//
//
//typedef struct {
//	int x;
//	int y;
//}Coord;
//
//int main() {
//	Coord c1 = { 1,2 };
//	printf("���� ��ǥ�� (%d, %d)�Դϴ�.\n", c1.x, c1.y);
//	return 0;
//}

//typedef struct {
//	int s_id;
//	int age;
//}Student;
//
//void set_student(Student* s) {
//	s->s_id = 2000;
//	s->age = 23;
//}
//
//int main() {
//	Student s;
//	//Student* ptr;
//	s.s_id = 1000;
//	s.age = 20;
//	set_student(&s);
//
//	printf("%d %d", s.s_id, s.age);
//	return 0;
//}












//int main() {
//	//KUCCC ppt ��������1
//	int N;
//	scanf("%d", &N);
//	int* ptr = (int*)malloc(N * sizeof(int));
//	for (int i = 0; i < N; i++) {
//		*(ptr + i) = 5 * (i + 1);
//		printf("%d ", *(ptr + i));
//	}
//	return 0;
//}
//
//float average(int arr[], int length) {
//	int len = sizeof(arr) / sizeof(int);
//	float sum = 0;
//	for (int j = 0; j < length; j++) {
//		sum += arr[j];
//	}
//	float avg = sum / length;
//	return avg;
//}
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int* arr = (int*)malloc(N * sizeof(int));
//	printf("%d ���� ���� �Է�: ", N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &*(arr + i));
//	}
//	printf("��� ���: %f", average(arr, sizeof(arr) / sizeof(int)));
//	return 0;
//}