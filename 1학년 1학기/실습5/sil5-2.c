//#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의
//#include <stdio.h> //헤더파일 선언
//
//int main(void)//main함수의 시작
//{
//    int x, y, result, a, b, c, d, e, f, g;
//
//    printf("물건 값 : ");
//    scanf("%d", &x);
//
//    printf("고객으로부터 받은 현금 : ");
//    scanf("%d", &y);
//
//	if (x > y) //만약 x가 y보다 크다면
//    {
//        printf("돈이 부족합니다.\n");
//    }
//	else if (x == y) //만약 x와 y가 같다면
//	{
//		printf("거스름돈이 없습니다.\n");
//	}
//	else if (x < y) //만약 x가 y보다 작다면
//    {
//        result = y - x;
//        printf("거스름돈 : %d\n", result);
//
//        a = result / 10000;
//        result = result % 10000;
//        b = result / 5000;
//        result = result % 5000;
//        c = result / 1000;
//        result = result % 1000;
//        d = result / 500;
//        result = result % 500;
//        e = result / 100;
//        result = result % 100;
//        f = result / 50;
//        result = result % 50;
//        g = result / 10;
//        result = result % 10;
//
//        printf("만  원 : %d\n", a);
//        printf("오천원 : %d\n", b);
//        printf("천  원 : %d\n", c);
//        printf("오백원 : %d\n", d);
//        printf("백  원 : %d\n", e);
//        printf("오십원 : %d\n", f);
//        printf("십  원 : %d\n", g);
//        printf("거스름돈 : %d\n", result);
//    }
//
//	return 0; //main함수의 끝
//}