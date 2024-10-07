#include <stdio.h>

void swap(int* px, int* py); // 함수 선언

int main(void)
{
	int a = 10, b = 20;

	printf("swap() 호출전 a=%d b=%d\n", a, b);
	swap(&a, &b); // 주소값을 넘겨줌
	printf("swap() 호출후 a=%d b=%d\n", a, b);

	return 0;
}

void swap(int* px, int* py) // 함수 정의

{
	int tmp; // 임시 변수

	tmp = *px; // tmp에 px의 값 저장
	*px = *py; // px에 py의 값 저장
	*py = tmp; // py에 tmp의 값 저장
}