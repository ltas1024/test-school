//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    int secret_number, guess, attempts = 0;
//
//    // ���� �õ� �ʱ�ȭ
//    srand(time(0));
//    secret_number = rand() % 100 + 1; // 1���� 100 ������ ���� ���� ����
//
//    printf("������ �����ϴ� ���ӿ� ���� ���� ȯ���մϴ�!\n");
//
//    do {
//        printf("1���� 100 ������ ���ڸ� �����غ�����: ");
//        scanf("%d", &guess);
//        attempts++;
//
//        if (guess > secret_number) {
//            printf("�ʹ� �����ϴ�. �ٽ� �õ��غ�����.\n");
//        }
//        else if (guess < secret_number) {
//            printf("�ʹ� �����ϴ�. �ٽ� �õ��غ�����.\n");
//        }
//        else {
//            printf("�����մϴ�! �����Դϴ�.\n");
//            printf("�õ� Ƚ��: %d\n", attempts);
//        }
//    } while (guess != secret_number);
//
//    return 0;
//}