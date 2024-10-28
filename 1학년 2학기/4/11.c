#include <stdio.h>
#include <string.h>   //strlen()
#include <ctype.h>   // islower(), isupper(), isdigit()

int main(void)
{
    int lower_case_count = 0;	// 소문자 개수
    int upper_case_count = 0;	// 대문자 개수
    int digit_count = 0;	// 숫자 개수
    char pass[100] = "";	// 널 문자열로 초기화한다. 
    int len, i;

    printf("패스워드를 입력하시오: ");
    for (i = 0; i < 12; i++) {
        int ch = _getch();
        if (ch == '\r') break;    // Enter 키('\r')
        pass[i] = ch;
        _putch('*');
    }

    len = strlen(pass);	// 문자열의 길이
    for (i = 0; i < len; i++) {
        if (islower(pass[i])) ++lower_case_count;
        if (isupper(pass[i])) ++upper_case_count;
        if (isdigit(pass[i])) ++digit_count;
    }
    if (len >= 7 && lower_case_count > 0 &&
        upper_case_count > 0 && digit_count > 0)
        printf("\n%s은 유효한 암호입니다. \n", pass);
    else
        printf("\n%s은 유효한 암호가 아닙니다. \n", pass);
    return 0;
}