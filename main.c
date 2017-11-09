#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; 
	int b;
	printf("请输入两个整数，用空格隔开：");
	scanf("%d %d", &a, &b);
	printf("********简易计算器********\n");
	printf("1        加法\n");
	printf("2        减法\n");
	printf("3        乘法\n");
	printf("4        除法\n");
	printf("5        显示菜单\n");
	printf("6        重新输入两个整数\n");
	printf("7        退出\n");
	printf("*************************\n");
	printf("请选择指令：");
	int komanda;
	int c1;
	float c2;
	scanf("%d", &komanda);
	while (komanda != 7) {
		if (komanda == 1)
		{
			c1 = a + b;
			printf("执行加法运算, %d + %d = %d\n", a, b, c1);
			printf("请选择指令：");
			scanf("%d", &komanda);
		} else if (komanda == 2)
		{
			c1 = a - b;
			printf("执行减法运算, %d - %d = %d\n", a, b, c1);
			printf("请选择指令：");
			scanf("%d", &komanda);
		} else if (komanda == 3)
		{
			c1 = a * b;
			printf("执行乘法运算, %d * %d = %d\n", a, b, c1);
			printf("请选择指令：");
			scanf("%d", &komanda);
		} else if (komanda == 4)
		{
			c2 = (float)a / (float)b;
			printf("执行除法运算，%d / %d = %.3f\n", a, b, c2);
			printf("请选择指令：");
			scanf("%d", &komanda);
		} else if (komanda == 5)
		{
			printf("*************************\n");
			printf("1        加法\n");
			printf("2        减法\n");
			printf("3        乘法\n");
			printf("4        除法\n");
			printf("5        显示菜单\n");
			printf("6        重新输入两个整数\n");
			printf("7        退出\n");
			printf("*************************\n");
			printf("请选择指令：");
			scanf("%d", &komanda);	
		} else if (komanda == 6)
		{
			printf("请输入两个整数：");
			scanf("%d %d", &a, &b);
			printf("请选择指令：");
			scanf("%d", &komanda);
		} else if (komanda == 7)
		{
			exit(0);
		} else {
			printf("非法指令！\n");
		}
	}

	return 0;
}
