//#define _CRT_SECURE_NO_WARNINGS // strtok_s ����� ���� �ʿ��� ��ũ��
//
//#include <stdio.h> // ǥ�� ����� ���̺귯��
//#include <stdlib.h> // atoi �Լ��� ����ϱ� ���� ���̺귯��
//#include <string.h> // strtok_s �Լ��� ����ϱ� ���� ���̺귯��
//
//int main() {
//    int months[4] = { 0 }; // �迭�� 0���� �ʱ�ȭ�Ͽ� �ʱⰪ ����
//
//    // ����ڷκ��� �� �Է� �ޱ�
//    printf("���� �Է��ϼ��� (�ִ� 4���� ���� �Է�, �� ���ڸ� �������� ����) : ");
//    char input[100]; // �ִ� 100���ڱ��� �Է� ���� �� �ִ� �迭
//    fgets(input, sizeof(input), stdin); // �� ���� ��°�� �Է� ����
//
//
//    // �Էµ� ���ڿ��� ������ �������� ������ ó��
//	char* token; // strtok_s�� ����� �� �ʿ��� ù ��° ����
//    char* nextToken; // strtok_s�� ����� �� �ʿ��� �� ��° ����
//	int count = 0; // �Էµ� ������ ������ ������ ����
//    token = strtok_s(input, " ", &nextToken); // ù ��° ��ū�� ����
//	while (token != NULL && count < 4) { // ��ū�� NULL�� �ƴϰ� 4�� ������ �� �ݺ�
//        months[count++] = atoi(token); // ���ڿ��� ������ ��ȯ�Ͽ� �迭�� ����
//        token = strtok_s(NULL, " ", &nextToken); // ���� ��ū�� ����
//    }
//
//
//    // �Է� ���� ���� ���� �ϼ� ����ϱ�
//    for (int i = 0; i < count; i++) { // �Է��� ������ŭ�� ���
//        switch (months[i]) {
//        case 1:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 2:
//            printf("%d���� �ϼ��� 28�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 3:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 4:
//            printf("%d���� �ϼ��� 30�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 5:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 6:
//            printf("%d���� �ϼ��� 30�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 7:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 8:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 9:
//            printf("%d���� �ϼ��� 30�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 10:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 11:
//            printf("%d���� �ϼ��� 30�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        case 12:
//            printf("%d���� �ϼ��� 31�ϱ��� �ֽ��ϴ�.\n", months[i]);
//            break;
//        default:
//            printf("%d���� �߸��� �Է��Դϴ�.\n", months[i]);
//        }
//    }
//
//	return 0; // ���α׷� ����
//}