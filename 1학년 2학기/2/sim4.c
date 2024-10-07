#include <stdio.h> // 헤더파일 선언

void swap(int x, int y); // swap 함수 선언

int main(void)
{
	int a = 10, b = 20;

	printf("a = %d, b = %d\n", a, b);
	swap(a, b); // swap 함수 호출
	printf("a = %d, b = %d\n", a, b);

	return 0;

}

void swap(int x, int y) // swap 함수 정의
{
	int temp; // 임시 변수 선언

	temp = x; // x의 값이 temp에 저장
	x = y; // y의 값이 x에 저장
	y = temp; // temp의 값이 y에 저장
}
