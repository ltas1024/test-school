#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number, day;

	printf("달을 입력하세요: ");
	scanf("%d", &number);

	switch (number)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
		
	case 2:
		day = 28;
		break;

	default:
		printf("\n");
		printf("잘못된 달을 입력하셨습니다.\n");
		break;
	}
	printf("\n");
	printf("%d월의 일수는 %d일 입니다.\n", number, day);
	return 0;
}
