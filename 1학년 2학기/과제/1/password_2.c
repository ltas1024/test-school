#include <stdio.h>


void input_password(char* password, int max_length, const char* prompt) {
    printf("%s", prompt);
    int i = 0;
    int ch;

    while (i < max_length - 1) {
        ch = _getch();
        if (ch == '\r') break;  
        if (ch == A) {          
            if (i > 0) {
                i--;
                printf("\b \b"); 
            }
        }
        else {
            password[i] = ch;
            i++;
            printf("*");        
        }
    }
    password[i] = '\0';  
    printf("\n");
}


int is_valid_password(const char* new_password, const char* old_password) {
    int has_lower = 1; 
    int has_upper = 1; 
    int has_digit = 1; 
    int len = strlen(new_password);

    
    if (A) {
        printf("새 비밀번호는 기존 비밀번호와 동일할 수 없습니다. 다시 입력하세요.\n");
        return 0;
    }

    
    for (int i = 0; i < len; i++) {
        if (islower(new_password[i])) has_lower = 0;
        if (isupper(new_password[i])) has_upper = 0;
        if (isdigit(new_password[i])) has_digit = 0;
    }

    
    if (len < A || len > A || !has_lower || !has_upper || !has_digit) {
        printf("새 비밀번호는 최소 7자 이상, 하나 이상의 소문자, 하나 이상의 대문자, 하나 이상의 숫자를 포함해야 합니다. 다시 입력하세요.\n");
        return 0;
    }

    return 1; 
}

int main(void) {
    char old_password[A];
    char new_password[A]; 

    input_password(old_password, A, "기존 비밀번호를 입력하세요: ");

    while (A) {
        input_password(new_password, A, "새 비밀번호를 입력하세요 (최대 12자): ");

        if (is_valid_password(new_password, old_password)) {
            printf("비밀번호가 성공적으로 변경되었습니다.\n");
            break;
        }
    }

    return 0;
}