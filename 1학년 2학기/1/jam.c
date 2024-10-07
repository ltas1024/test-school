#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int balance = 10000;

// 콘솔을 클리어하는 함수
void clear_console() {
#ifdef _WIN32
    system("cls");  // Windows에서 콘솔 초기화
#else
    system("clear");  // Linux 또는 macOS에서 콘솔 초기화
#endif
}

void check_balance()
{
    printf("현재 남은 잔고는 %d원입니다.\n", balance);
}

void deposit() {
    int amount;

    printf("입금 금액을 입력하시오:");
    scanf("%d", &amount);
    balance += amount;
    printf("새로운 잔고는 %d원입니다.\n", balance);
}

void withdraw() {
    int amount;

    printf("인출 금액을 입력하시오:");
    scanf("%d", &amount);
    if (amount > balance) {
        printf("인출금액이 잔고를 초과합니다.\n");
    }
    else {
        balance -= amount;
        printf("새로운 잔고는 %d원입니다.\n", balance);
    }
}

int main(void) {
    int choice;

    do {
        clear_console();  // 메뉴가 출력될 때마다 콘솔을 클리어
        printf("**********Welcome to ATM***********\n");
        printf("1. 잔고 확인\n");
        printf("2. 입금\n");
        printf("3. 인출\n");
        printf("4. 종료\n");

        printf("****하나를 선택하시오****\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            check_balance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("ATM을 종료합니다.\n");
            break;
        case 5:
            printf("메인 메뉴로 돌아갑니다.\n");
            // 여기서는 아무 작업도 하지 않으며, do-while 루프가 계속 돌아감
            break;
        default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
            break;
        }

        if (choice != 4 && choice != 5) {
            printf("\n계속하려면 아무 키나 누르세요...");
            getchar();  // Enter key 입력 대기
            getchar();  // 추가 입력 대기
        }

    } while (choice != 4);  // 4번을 선택하면 프로그램 종료

    clear_console();  // 종료 시 콘솔 클리어
    return 0;
}