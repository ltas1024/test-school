#include <stdio.h> // 헤더파일 선언

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 }; // 배열 선언 및 초기화
	int* p; // 포인터 선언
	p = a; // 포인터에 배열의 주소값 대입

	printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]); // 배열의 값 출력
	printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);// 포인터를 통한 배열의 값 출력

	return 0;
}