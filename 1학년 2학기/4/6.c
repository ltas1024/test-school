// getchar()의 사용
#include <stdio.h>
int main(void)
{
	int ch;		// 정수형에 주의
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}   //getchar()의 반환형은 int이다 (주의!  Char형이 아님)