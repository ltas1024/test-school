#include <stdio.h>

int main(void)
{
    char line[100] = "##@computer##";
    char line2[100] = "";

    int k = 0;
    for (int i = 0; line[i] != NULL; ++i) {
        while (line[i] >= 'A' && line[i] <= 'z') {     // 현재 문자가 ’A’~’z’ 범위내에 있는지 확인 
            line2[k++] = line[i++];     //line[i]의 문자를 line[k]에 복사하고 k와 i를 1씩 증가
    }
}
    line2[k] = '\0';     //문자열의 끝을 표시하기 위해 NULL문자를 추가 
        printf("입력 문자열: %s\n", line);
    printf("출력 문자열: %s\n", line2);
return 0;
}
