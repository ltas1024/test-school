//#define _CRT_SECURE_NO_WARNINGS // strtok_s 사용을 위해 필요한 매크로
//
//#include <stdio.h> // 표준 입출력 라이브러리
//#include <stdlib.h> // atoi 함수를 사용하기 위한 라이브러리
//#include <string.h> // strtok_s 함수를 사용하기 위한 라이브러리
//
//int main() {
//    int months[4] = { 0 }; // 배열을 0으로 초기화하여 초기값 설정
//
//    // 사용자로부터 월 입력 받기
//    printf("달을 입력하세요 (최대 4개의 숫자 입력, 각 숫자를 공백으로 구분) : ");
//    char input[100]; // 최대 100글자까지 입력 받을 수 있는 배열
//    fgets(input, sizeof(input), stdin); // 한 줄을 통째로 입력 받음
//
//
//    // 입력된 문자열을 공백을 기준으로 나누어 처리
//	char* token; // strtok_s를 사용할 때 필요한 첫 번째 인자
//    char* nextToken; // strtok_s를 사용할 때 필요한 두 번째 인자
//	int count = 0; // 입력된 숫자의 개수를 저장할 변수
//    token = strtok_s(input, " ", &nextToken); // 첫 번째 토큰을 얻음
//	while (token != NULL && count < 4) { // 토큰이 NULL이 아니고 4개 이하일 때 반복
//        months[count++] = atoi(token); // 문자열을 정수로 변환하여 배열에 저장
//        token = strtok_s(NULL, " ", &nextToken); // 다음 토큰을 얻음
//    }
//
//
//    // 입력 받은 월에 따라 일수 출력하기
//    for (int i = 0; i < count; i++) { // 입력한 개수만큼만 출력
//        switch (months[i]) {
//        case 1:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        case 2:
//            printf("%d월의 일수는 28일까지 있습니다.\n", months[i]);
//            break;
//        case 3:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        case 4:
//            printf("%d월의 일수는 30일까지 있습니다.\n", months[i]);
//            break;
//        case 5:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        case 6:
//            printf("%d월의 일수는 30일까지 있습니다.\n", months[i]);
//            break;
//        case 7:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        case 8:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        case 9:
//            printf("%d월의 일수는 30일까지 있습니다.\n", months[i]);
//            break;
//        case 10:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        case 11:
//            printf("%d월의 일수는 30일까지 있습니다.\n", months[i]);
//            break;
//        case 12:
//            printf("%d월의 일수는 31일까지 있습니다.\n", months[i]);
//            break;
//        default:
//            printf("%d월은 잘못된 입력입니다.\n", months[i]);
//        }
//    }
//
//	return 0; // 프로그램 종료
//}