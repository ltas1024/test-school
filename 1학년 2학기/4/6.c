#include <stdio.h>
int main(void)
{
	int ch;		// 정수형에 주의
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}