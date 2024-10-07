//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    int months[4] = { 0 }; // 배열을 0으로 초기화하여 초기값 설정
//
//    // 사용자로부터 월 입력 받기
//    printf("달을 입력하세요 (최대 4개의 숫자 입력, 각 숫자를 공백으로 구분): ");
//    char input[100]; // 최대 100글자까지 입력 받을 수 있는 배열
//    fgets(input, sizeof(input), stdin); // 한 줄을 통째로 입력 받음
//
//    // 입력된 문자열을 공백을 기준으로 나누어 처리
//    char* token;
//    char* nextToken; // strtok_s를 사용할 때 필요한 두 번째 인자
//    int count = 0;
//    token = strtok(input, " "); // 첫 번째 토큰을 얻음
//    while (token != NULL && count < 4) {
//        months[count++] = atoi(token); // 문자열을 정수로 변환하여 배열에 저장
//        token = strtok(NULL, " "); // 다음 토큰을 얻음
//    }
//
//    // 입력 받은 월에 따라 일수 출력하기
//    printf("결과: ");
//    int printed = 0;
//    for (int i = 0; i < count; i++) { // 입력한 개수만큼만 출력
//        switch (months[i]) {
//        case 2:
//            if (printed)
//                printf(", ");
//            printf("%d", months[i]);
//            printed = 1;
//            break;
//        }
//    }
//    if (printed)
//        printf("월의 일수는 28일 입니다.");
//
//    printed = 0;
//    for (int i = 0; i < count; i++) { // 입력한 개수만큼만 출력
//        switch (months[i]) {
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            if (printed)
//                printf(", ");
//            printf("%d", months[i]);
//            printed = 1;
//            break;
//        }
//    }
//    if (printed)
//        printf("월의 일수는 30일 입니다.");
//
//    printed = 0;
//    for (int i = 0; i < count; i++) { // 입력한 개수만큼만 출력
//        switch (months[i]) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            if (printed)
//                printf(", ");
//            printf("%d", months[i]);
//            printed = 1;
//            break;
//        }
//    }
//    if (printed)
//        printf("월의 일수는 31일 입니다.");
//
//    printf("\n");
//
//    return 0;
//}