//#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
//#include <stdio.h> //������� ����
//
//int main(void)//main�Լ��� ����
//{
//    int x, y, result, a, b, c, d, e, f, g;
//
//    printf("���� �� : ");
//    scanf("%d", &x);
//
//    printf("�����κ��� ���� ���� : ");
//    scanf("%d", &y);
//
//	if (x > y) //���� x�� y���� ũ�ٸ�
//    {
//        printf("���� �����մϴ�.\n");
//    }
//	else if (x == y) //���� x�� y�� ���ٸ�
//	{
//		printf("�Ž������� �����ϴ�.\n");
//	}
//	else if (x < y) //���� x�� y���� �۴ٸ�
//    {
//        result = y - x;
//        printf("�Ž����� : %d\n", result);
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
//        printf("��  �� : %d\n", a);
//        printf("��õ�� : %d\n", b);
//        printf("õ  �� : %d\n", c);
//        printf("����� : %d\n", d);
//        printf("��  �� : %d\n", e);
//        printf("���ʿ� : %d\n", f);
//        printf("��  �� : %d\n", g);
//        printf("�Ž����� : %d\n", result);
//    }
//
//	return 0; //main�Լ��� ��
//}