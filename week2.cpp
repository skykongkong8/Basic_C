#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int score[5] = {0,};
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        if (score[i] >= 40) {
            score[i] = score[i];
        }
        else if (score[i] < 40) {
            score[i] = 40;
        }
        sum += score[i];
    }
    avg = sum / 5;
    printf("%d", avg);
    return 0;
}

/*nt score[10] = { 100,84,20,67,77,98,32,90,80,87 };
int sum = 0;
float avg = 0;
int i;
for (i = 0; i < 10; i++) {
    sum += score[i];
}
avg = sum / 10.0f;
printf("")*/
//���ذ���11
//int A, B, T, n = 1;
//scanf("%d", &T);
//for (int i = 1; i <= T; i++) {
//    scanf("%d %d", &A, &B);
//    printf("Case #%d: %d + %d = %d\n", n, A, B, A + B);
//    n += 1;
//}
//���ذ���10
//int A, B, N, n = 1;
//scanf("%d", &N);
//for (int i = 1; i <= N; i++) {
//    scanf("%d %d", &A, &B);
//    printf("Case #%d: %d\n", n, A + B);
//    n += 1;
//}
//���ذ���9
//int N;
//scanf("%d", &N);
//for (int i = 1; i <= N; i++) {
//    printf("%d\n", i);
////}
//���ذ���8
//int n, sum = 0;
//scanf("%d", &n);
//for (int i = 1; i <= n; i++) {
//    sum += i;
//}
//printf("%d", sum);

//���ذ���7
//int A,B,N;
//scanf("%d", &N);
//for (int i = 1; i <= N; i++) {
//    scanf("%d %d", &A, &B);
//    printf("%d\n", A + B);
//}
//return 0;


//���ذ���6
//int N;
//scanf("%d", &N);
//for (int i = 1; i <= 9; i++) {
//    printf("%d * %d = %d\n", N, i, i * N);
//}
//���ذ���5
//int H, M;
//scanf("%d %d", &H, &M);
//if (M >= 45) {
//    M -= 45;
//    printf("%d %d", H, M);
//}
//else if (H != 0 && M < 45) {
//    M += 15;
//    H -= 1;
//    printf("%d %d", H, M);
//}
//else if (H == 0 && M < 45) {
//    M += 15;
//    H = 23;
//    printf("%d %d", H, M);
//}
//���ذ���4
//int x, y;
//scanf("%d\n%d", &x, &y);
//if (x > 0 && y > 0) {
//    printf("1");
//}
//else if (x > 0 && y < 0) {
//    printf("4");
//}
//if (x < 0 && y > 0) {
//    printf("2");
//}
//if (x < 0 && y < 0) {
//    printf("3");
//���ذ���3
    /*int year;
    scanf("%d", &year);
    if ((year % 4 = 0) && (year % 100 != 0)) {
        printf("1");
    }
    else if (year % 400 == 0) {
        printf("1");
    }
    else {
        printf("0");
    }*/
    //���ذ���2
    /*int score;
    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A");
    }
    else if (score >= 80 && score <= 89) {
        printf("B");
    }
    else if (score >= 70 && score <= 79) {
        printf("C");
    }
    else if (score >= 60 && score <= 69) {
        printf("D");
    }
    else {
        printf("F");
    }*/


  
    /*int a=5, b=4, c=1;
    b += a;
    printf("%d\n", b);
    c -= a;
    printf("%d\n", c);
    int d = 1, e = 2;
    d++;
    e--;
    printf("%d%d", d, e);*/
    //int b = 1, c = 1;
    //printf("%d %d %d", ++b, c++,c);
    //��ġ���������ڴ� ��½� ������ �Ǿ� ������, ��ġ ���� �����ڴ� ��� ���� ��º��� �ݿ��ȴ�.
    /*char a='a';
    printf("%c", ++a);*/
    /*int a = -5, b = -3;
    printf("%d\n", a * b);
    printf("%d\n", a / b);//%d �� digit, int���� ������ �ǹǷ� 1�� ����
    printf("%d\n", a % b);*/
    /*int a, b;
    scanf("%d %d", &a, &b); //&�� ������
    printf("%d", a/b);*/
    /*long long num1 = 123456789000;
    int num2 = 10;
    printf("%lld\n", num1 + num2);
    printf("%lld\n", num1 - num2);
    printf("%lld\n", num1 * num2);
    printf("%lld\n", num1 / num2);

    int num3=11;
    float num4=4.4f;
    printf("%f\n", num3 - num4);
    printf("%f\n", num3+ num4);
    printf("%f\n", num3 * num4);
    printf("%f\n", num3/num4);*/



    /*int number;
    scanf("%d", &number);
    if (number < 5 || number >=10) {
        printf("5���� �۰ų� 10���� ũ�ų� ����");
    }
    else if (number != 2 && number > -1) {
        printf("2�� �ƴϰ�, -1���� ũ��");
    }
    else if (number != 1 && number != 3 && number != 5 && number != 7) {
        printf("1�� �ƴϰ�, 3�� �ƴϰ�, 5�� �ƴϰ�, 7�� �ƴϴ�.");
    }
    else if ((number >= 20 && number < 30) || (number >= 50 && number < 60)) {
        printf("20�� 30�����̰ų�, 50�� 60�����̴�.");}
    else if ((number - 3) > 7) {
        printf("(number-3)�� 7���� ũ��");
    }
    else if (number % 2 != 0) {
        printf("Ȧ���̴�.");
    }*/
    
   /* int score;
    scanf("%d", &score);
    if (score == 100) {
        printf("100�� A+");
    }
    else if (score >= 90 && score < 100) {
        printf("99��~90�� : A");
    }
    else if (score >= 80 && score < 90) {
        printf("89��~80�� : B");
    }
    else if (score >= 70 && score < 80) {
        printf("79��~70�� : C");
    }
    else {
        printf("������ : F");
    }*/

    //char grade;
    //scanf("%c", &grade);
    //switch (grade) {
    //case 'A':
    //    printf("99~90��");
    //    break;
    //case 'B':
    //    printf("89~80��");
    //    break;
    //case 'C':
    //    printf("79~70��");
    //    break;
    //case 'F':
    //    printf("69�� ����");
    //    break;
    //default:
    //    printf("�Էµ� ������ �̻���");
    //}

    /*int year;
    int february_max_date;
    scanf("")
    february_max_date = year % 4 == 0 ? 229 : 28;
    printf("%d", february_max_date);*/

//���� ����1
    /*int A, B;
    scanf("%d %d", &A, &B);
    if (A > B) {
        printf(">");
    }
    if (A < B) {
        printf("<");
    }
    if (A == B) {
        printf("==");
    }*/

