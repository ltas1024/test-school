#include <stdio.h>

#define ROWS 3
#define COLS 3
double get_total_avg(int m[][COLS]) // 2차원 배열을 입력으로 받아서 모든 요소의 평균 값을 계산.
{
    int* p, * endp;
    double sum = 0.0;

    p = &m[0][0];			// p는 0행의 시작 주소
    endp = &m[ROWS - 1][COLS - 1];	// 마지막 행과열
    while (p <= endp)		// p가 종료 주소보다 작거나 같으면
        sum += *p++;          // sum에 p가 가리키는 값 누적

    sum /= ROWS * COLS;		// 평균 계산
    return sum;
}

int main(void)
{
    int scores[ROWS][COLS] = { { 10, 20, 30},
                                                   { 40, 50, 60},
                                                   { 70, 80, 90} };
    double avg = get_total_avg(scores);
    printf("평균성적=%.2f \n", avg);    //평균성적=50.00
    return 0;
}
