#include <stdio.h>

int add(int a, int b) {     // 두 정수를 더하는 함수
      return a + b;
}

int main() {
       int (*funcPtr)(int, int) = add;     // 함수 포인터 선언 및 초기화

       int result = funcPtr(2, 3);     // 함수 포인터를 통해 함수 호출

       printf("Result: %d\n", result);      // Result: 5

    return 0;
}