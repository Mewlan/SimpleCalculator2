#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; 
	int b;
	printf("�����������������ÿո������");
	scanf("%d %d", &a, &b);
	printf("********���׼�����********\n");
	printf("1        �ӷ�\n");
	printf("2        ����\n");
	printf("3        �˷�\n");
	printf("4        ����\n");
	printf("5        ��ʾ�˵�\n");
	printf("6        ����������������\n");
	printf("7        �˳�\n");
	printf("*************************\n");
	printf("��ѡ��ָ�");
	int komanda;
	int c1;
	float c2;
	scanf("%d", &komanda);
	while (komanda != 7) {
		if (komanda == 1)
		{
			c1 = a + b;
			printf("ִ�мӷ�����, %d + %d = %d\n", a, b, c1);
			printf("��ѡ��ָ�");
			scanf("%d", &komanda);
		} else if (komanda == 2)
		{
			c1 = a - b;
			printf("ִ�м�������, %d - %d = %d\n", a, b, c1);
			printf("��ѡ��ָ�");
			scanf("%d", &komanda);
		} else if (komanda == 3)
		{
			c1 = a * b;
			printf("ִ�г˷�����, %d * %d = %d\n", a, b, c1);
			printf("��ѡ��ָ�");
			scanf("%d", &komanda);
		} else if (komanda == 4)
		{
			c2 = (float)a / (float)b;
			printf("ִ�г������㣬%d / %d = %.3f\n", a, b, c2);
			printf("��ѡ��ָ�");
			scanf("%d", &komanda);
		} else if (komanda == 5)
		{
			printf("*************************\n");
			printf("1        �ӷ�\n");
			printf("2        ����\n");
			printf("3        �˷�\n");
			printf("4        ����\n");
			printf("5        ��ʾ�˵�\n");
			printf("6        ����������������\n");
			printf("7        �˳�\n");
			printf("*************************\n");
			printf("��ѡ��ָ�");
			scanf("%d", &komanda);	
		} else if (komanda == 6)
		{
			printf("����������������");
			scanf("%d %d", &a, &b);
			printf("��ѡ��ָ�");
			scanf("%d", &komanda);
		} else if (komanda == 7)
		{
			exit(0);
		} else {
			printf("�Ƿ�ָ�\n");
		}
	}

	return 0;
}
