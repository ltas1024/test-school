//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    int months[4] = { 0 }; // �迭�� 0���� �ʱ�ȭ�Ͽ� �ʱⰪ ����
//
//    // ����ڷκ��� �� �Է� �ޱ�
//    printf("���� �Է��ϼ��� (�ִ� 4���� ���� �Է�, �� ���ڸ� �������� ����): ");
//    char input[100]; // �ִ� 100���ڱ��� �Է� ���� �� �ִ� �迭
//    fgets(input, sizeof(input), stdin); // �� ���� ��°�� �Է� ����
//
//    // �Էµ� ���ڿ��� ������ �������� ������ ó��
//    char* token;
//    char* nextToken; // strtok_s�� ����� �� �ʿ��� �� ��° ����
//    int count = 0;
//    token = strtok(input, " "); // ù ��° ��ū�� ����
//    while (token != NULL && count < 4) {
//        months[count++] = atoi(token); // ���ڿ��� ������ ��ȯ�Ͽ� �迭�� ����
//        token = strtok(NULL, " "); // ���� ��ū�� ����
//    }
//
//    // �Է� ���� ���� ���� �ϼ� ����ϱ�
//    printf("���: ");
//    int printed = 0;
//    for (int i = 0; i < count; i++) { // �Է��� ������ŭ�� ���
//        switch (months[i]) {
//        case 2:
//            if (printed)
//                printf(", ");
//            printf("%d", months[i]);
//            printed = 1;
//            break;
//        }
//    }
//    if (printed)
//        printf("���� �ϼ��� 28�� �Դϴ�.");
//
//    printed = 0;
//    for (int i = 0; i < count; i++) { // �Է��� ������ŭ�� ���
//        switch (months[i]) {
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            if (printed)
//                printf(", ");
//            printf("%d", months[i]);
//            printed = 1;
//            break;
//        }
//    }
//    if (printed)
//        printf("���� �ϼ��� 30�� �Դϴ�.");
//
//    printed = 0;
//    for (int i = 0; i < count; i++) { // �Է��� ������ŭ�� ���
//        switch (months[i]) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            if (printed)
//                printf(", ");
//            printf("%d", months[i]);
//            printed = 1;
//            break;
//        }
//    }
//    if (printed)
//        printf("���� �ϼ��� 31�� �Դϴ�.");
//
//    printf("\n");
//
//    return 0;
//}