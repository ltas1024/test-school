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
//    for (int i = 0; i < count; i++) { // �Է��� ������ŭ�� ���
//        switch (months[i]) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("%d���� �ϼ��� 31��", months[i]);
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("%d���� �ϼ��� 30��", months[i]);
//            break;
//        case 2:
//            printf("%d���� �ϼ��� 28��", months[i]);
//            break;
//        default:
//            printf("%d���� �߸��� �Է�", months[i]);
//        }
//
//        // ��� ���Ŀ� ���� ��ǥ �Ǵ� ��ħǥ ���
//        if (i < count - 1) {
//            printf(", ");
//        }
//        else {
//            printf("�Դϴ�.\n");
//        }
//    }
//
//    return 0;
//}