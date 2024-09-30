#include <stdio.h>
int square(int *ptr) {    // 입력된 정수의 제곱 값을 계산하고 반환하는 함수
     return (*ptr) * (*ptr);
}
int main() {
     int num;
     int *ptr;

    printf("정수를 입력하세요: ");   
    scanf("%d", &num);   //  정수 입력 받음

    ptr = &num;    // 포인터에 입력된 정수의 주소를 저장
    printf("%d의 제곱은 %d입니다.\n", *ptr, square(ptr));  //ptr은 num의 주소
    return 0;
}