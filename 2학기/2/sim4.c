#include <stdio.h>

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

	printf("swap() 함수 내에서 a=%d b=%d\n", x, y);
}

int main(void)
{
	int a = 10, b = 20;

	printf("swap() 호출전 a=%d b=%d\n", a, b);
	swap(a, b);

	printf("swap() 호출후 a=%d b=%d\n", a, b);
	return 0;
}
