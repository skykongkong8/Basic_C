#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int alphabets[26] = {};
	char checking_char;
	char S[100];
	scanf("%s", &S);
	for (int i = 'a'; i < 'z'; i++) {
		for (int j = 0; j < strlen(S); j++) {
			if (S[j] == i) {
				alphabets[i - 97] = j + 1;
				break;
			}
		}

	}
	for (int k = 0; k < 26; k++) {
		printf("%d", alphabets[k] - 1);
		if (k < 25) {
			printf(" ");
		}
	}
	return 0;
}

//백준4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int score[4] = {}, scoresum = 0, scorecomp[5] = {}, scoremax = 0, winner;
//	for (int i = 0; i < 5; i++) {
//		scoresum = 0;
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &score[j]);
//			scoresum += score[j];
//		}
//		scorecomp[i] = scoresum;
//	}
//	for (int h = 0; h < 5; h++) {
//		if (scorecomp[h] > scoremax) {
//			scoremax = scorecomp[h];
//			winner = h + 1;
//		}
//	}
//	printf("%d %d", winner, scoremax);
//	return 0;
//}




//백준3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int notes[8] = {}, count = 0;
//    for (int i = 0; i < 8; i++) {
//        scanf("%d", &notes[i]);
//    }
//    for (int j = 0; j < 7; j++) {
//        if ((notes[j] + 1) == (notes[j + 1])) {
//            count += 1;
//        }
//        else if ((notes[j] - 1) == (notes[j + 1])) {
//            count -= 1;
//        }
//
//    }
//    if (count == 7) {
//        printf("ascending");
//    }
//    else if (count == -7) {
//        printf("descending");
//    }
//    else if (count != 7 | count != -7) {
//        printf("mixed");
//    }
//
//    return 0;
//}



//백준2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main() {
//    int N, score = 0, ocount = 0;
//    char quiz[80] = {}, O, X;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        scanf("%s", &quiz);
//        for (int k = 0; k < strlen(quiz); k++) {
//            if (quiz[k] == 'O') {
//                ocount += 1;
//            }
//            if (quiz[k] == 'X') {
//                score += ocount * (ocount + 1) / 2;
//                ocount = 0;
//            }
//        }
//        printf("%d\n", score);
//        score = 0;
//        ocount = 0;
//    }
//    return 0;
//}







//int sum1 = 0, sum2 = 0;
//float avg1 = 0, avg2 = 0, avg_all = 0;
//int score[2][5] = {
//	{100,20,0,60,98},
//	{45,52,66,71,83}
//};
//for (int y = 0; y < 2; y++) {
//	for (int x = 0; x < 5; x++) {
//		printf("%d ", score[y][x]);
//	}
//	printf("\n");
//}
//printf("1반 점수 : ");
//for (int i = 0; i < 5; i++) {
//	for (int j = 0; j < 1; j++) {
//		sum1 += score[j][i];
//		sum2 += score[j][i];
//	}
//	printf("%d ", score[0][i]);
//}
//printf("\n");
//printf("2반 점수 : ");
//for (int i = 0; i < 5; i++) {
//	printf("%d ", score[1][i]);
//}
//printf("\n");
//printf("\n");
//avg1 = sum1 / 5.0f;
//avg2 = sum2 / 5.0f;
//avg_all = (avg1 + avg2) / 2;
//
//printf("1반 평균 : %f\n", avg1);
//printf("2반 평균 : %f\n", avg2);
//printf("전체 평균 : %f\n", avg_all);




//int main() {
//	char text[5] = { 'H','e','l','l','o' };
//	printf("원래 문장 : ");
//	for (int i = 0; i < 5; i++) {
//		printf("%c", text[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++) {
//		text[i] += 3;
//	}
//	printf("암호화된 문장 : ");
//	for (int i = 0; i < 5; i++) {
//		printf("%c", text[i]);
//	}
//	printf("\n");