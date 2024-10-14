#include <stdio.h>

int add(int a, int b) { return a + b; } // 여러 연산 함수를 정의
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // 함수 포인터 배열 선언 및 초기화
    int (*operations[3])(int, int) = { add, subtract, multiply };

    int a = 6, b = 2;

    // 각 함수 포인터를 통해 함수 호출
    printf("Add: %d\n", operations[0](a, b));       // Add: 8
    printf("Subtract: %d\n", operations[1](a, b));  // Subtract: 4
    printf("Multiply: %d\n", operations[2](a, b));  // Multiply: 12

    return 0;
}
