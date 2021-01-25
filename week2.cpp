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
//백준과제11
//int A, B, T, n = 1;
//scanf("%d", &T);
//for (int i = 1; i <= T; i++) {
//    scanf("%d %d", &A, &B);
//    printf("Case #%d: %d + %d = %d\n", n, A, B, A + B);
//    n += 1;
//}
//백준과제10
//int A, B, N, n = 1;
//scanf("%d", &N);
//for (int i = 1; i <= N; i++) {
//    scanf("%d %d", &A, &B);
//    printf("Case #%d: %d\n", n, A + B);
//    n += 1;
//}
//백준과제9
//int N;
//scanf("%d", &N);
//for (int i = 1; i <= N; i++) {
//    printf("%d\n", i);
////}
//백준고제8
//int n, sum = 0;
//scanf("%d", &n);
//for (int i = 1; i <= n; i++) {
//    sum += i;
//}
//printf("%d", sum);

//백준과제7
//int A,B,N;
//scanf("%d", &N);
//for (int i = 1; i <= N; i++) {
//    scanf("%d %d", &A, &B);
//    printf("%d\n", A + B);
//}
//return 0;


//백준과제6
//int N;
//scanf("%d", &N);
//for (int i = 1; i <= 9; i++) {
//    printf("%d * %d = %d\n", N, i, i * N);
//}
//백준과제5
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
//백준과제4
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
//백준과제3
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
    //백준과제2
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
    //전치증감연산자는 출력시 연산이 되어 나오고, 후치 증감 연산자는 계산 이후 출력부터 반영된다.
    /*char a='a';
    printf("%c", ++a);*/
    /*int a = -5, b = -3;
    printf("%d\n", a * b);
    printf("%d\n", a / b);//%d 는 digit, int형만 나오게 되므로 1이 나옴
    printf("%d\n", a % b);*/
    /*int a, b;
    scanf("%d %d", &a, &b); //&꼭 써주자
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
        printf("5보다 작거나 10보다 크거나 같다");
    }
    else if (number != 2 && number > -1) {
        printf("2가 아니고, -1보다 크다");
    }
    else if (number != 1 && number != 3 && number != 5 && number != 7) {
        printf("1이 아니고, 3이 아니고, 5가 아니고, 7이 아니다.");
    }
    else if ((number >= 20 && number < 30) || (number >= 50 && number < 60)) {
        printf("20과 30사이이거나, 50과 60사이이다.");}
    else if ((number - 3) > 7) {
        printf("(number-3)이 7보다 크다");
    }
    else if (number % 2 != 0) {
        printf("홀수이다.");
    }*/
    
   /* int score;
    scanf("%d", &score);
    if (score == 100) {
        printf("100점 A+");
    }
    else if (score >= 90 && score < 100) {
        printf("99점~90점 : A");
    }
    else if (score >= 80 && score < 90) {
        printf("89점~80점 : B");
    }
    else if (score >= 70 && score < 80) {
        printf("79점~70점 : C");
    }
    else {
        printf("나머지 : F");
    }*/

    //char grade;
    //scanf("%c", &grade);
    //switch (grade) {
    //case 'A':
    //    printf("99~90점");
    //    break;
    //case 'B':
    //    printf("89~80점");
    //    break;
    //case 'C':
    //    printf("79~70점");
    //    break;
    //case 'F':
    //    printf("69점 이하");
    //    break;
    //default:
    //    printf("입력된 학점이 이상함");
    //}

    /*int year;
    int february_max_date;
    scanf("")
    february_max_date = year % 4 == 0 ? 229 : 28;
    printf("%d", february_max_date);*/

//백준 과제1
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

