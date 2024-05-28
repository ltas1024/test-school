//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    int secret_number, guess, attempts = 0;
//
//    // 랜덤 시드 초기화
//    srand(time(0));
//    secret_number = rand() % 100 + 1; // 1부터 100 사이의 랜덤 숫자 생성
//
//    printf("정수를 추측하는 게임에 오신 것을 환영합니다!\n");
//
//    do {
//        printf("1부터 100 사이의 숫자를 추측해보세요: ");
//        scanf("%d", &guess);
//        attempts++;
//
//        if (guess > secret_number) {
//            printf("너무 높습니다. 다시 시도해보세요.\n");
//        }
//        else if (guess < secret_number) {
//            printf("너무 낮습니다. 다시 시도해보세요.\n");
//        }
//        else {
//            printf("축하합니다! 정답입니다.\n");
//            printf("시도 횟수: %d\n", attempts);
//        }
//    } while (guess != secret_number);
//
//    return 0;
//}