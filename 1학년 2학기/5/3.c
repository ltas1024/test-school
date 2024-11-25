#include <stdio.h>
// 2차원 공간의 점을 구조체로 나타낸다. 
struct point {
	int    x;
	int    y;
};

int main(void)
{
	struct point p = { 1, 2 };		// ① 고전적인 방법
	struct point q = { .y = 2, .x = 1 };	// ② 구조체의 멤버 이름을 이용


	struct point r = p;			// ③ 구조체 끼리는 복사	
	r = (struct point){ 1, 2 };		// ④ C99 버전	

	printf("p=(%d, %d) \n", p.x, p.y);
	printf("q=(%d, %d) \n", q.x, q.y);
	printf("r=(%d, %d) \n", r.x, r.y);
	return 0;
}