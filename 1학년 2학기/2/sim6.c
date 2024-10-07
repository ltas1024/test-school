#include <stdio.h> // 헤더파일 선언

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 }; // 배열 선언 및 초기화
	printf("a=%u\n", a); // 배열의 주소값 출력
	printf("a+1=%u\n", a + 1); // 배열의 주소값 출력
	printf("*a=%d\n", *a); // 배열의 값 출력
	printf("*(a+1)=%d\n", *(a + 1)); // 배열의 값 출력
	printf("a[1]=%d\n", a[1]); // 배열의 값 출력

	return 0;
}