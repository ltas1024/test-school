#include <stdio.h>
#include <string.h>   // 문자열 함수 사용을 위한 헤더
#include <ctype.h>    // 문자 판별 함수 사용을 위한 헤더
#include <conio.h>    // _getch(), _putch() 함수 사용을 위한 헤더 (Windows 전용)

// 비밀번호 입력 함수
void input_password(char* password, int max_length, const char* prompt) {
    printf("%s", prompt);
    int i = 0;
    int ch;

    while (i < max_length - 1) {
        ch = _getch();
        if (ch == '\r') break;  // Enter 키를 누르면 종료
        if (ch == 8) {          // 백스페이스 키 처리
            if (i > 0) {
                i--;
                printf("\b \b"); // '*' 지우기
            }
        }
        else {
            password[i] = ch;
            i++;
            printf("*");         // 화면에 '*' 표시
        }
    }
    password[i] = '\0';  // 문자열 종료
    printf("\n");
}

// 비밀번호 유효성 검사 함수
int is_valid_password(const char* new_password, const char* old_password) {
    int has_lower = 0; // 소문자 포함 여부
    int has_upper = 0; // 대문자 포함 여부
    int has_digit = 0; // 숫자 포함 여부
    int len = strlen(new_password);

    // 기존 비밀번호와 같은지 확인
    if (strcmp(new_password, old_password) == 0) {
        printf("새 비밀번호는 기존 비밀번호와 동일할 수 없습니다. 다시 입력하세요.\n");
        return 0;
    }

    // 비밀번호에 소문자, 대문자, 숫자가 포함되어 있는지 확인
    for (int i = 0; i < len; i++) {
        if (islower(new_password[i])) has_lower = 1;
        if (isupper(new_password[i])) has_upper = 1;
        if (isdigit(new_password[i])) has_digit = 1;
    }

    // 조건 충족 여부 확인
    if (len < 7 || len > 12 || !has_lower || !has_upper || !has_digit) {
        printf("새 비밀번호는 최소 7자 이상, 하나 이상의 소문자, 하나 이상의 대문자, 하나 이상의 숫자를 포함해야 합니다. 다시 입력하세요.\n");
        return 0;
    }

    return 1; // 모든 조건 충족
}

int main(void) {
    char old_password[100];
    char new_password[13]; // 최대 12자 + 1자(null)

    // 기존 비밀번호 입력
    input_password(old_password, 100, "기존 비밀번호를 입력하세요: ");

    // 새 비밀번호 입력 및 유효성 검사 반복
    while (1) {
        input_password(new_password, 13, "새 비밀번호를 입력하세요 (최대 12자): ");

        if (is_valid_password(new_password, old_password)) {
            printf("비밀번호가 성공적으로 변경되었습니다.\n");
            break;
        }
    }

    return 0;
}