#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	printf("&#x8BF7;&#x8F93;&#x5165;&#x4E24;&#x4E2A;&#x6574;&#x6570;&#xFF0C;&#x7528;&#x7A7A;&#x683C;&#x9694;&#x5F00;&#xFF1A;");
	scanf("%d %d", &a, &b);
	printf("********&#x7B80;&#x6613;&#x8BA1;&#x7B97;&#x5668;********\n");
	printf("1        &#x52A0;&#x6CD5;\n");
	printf("2        &#x51CF;&#x6CD5;\n");
	printf("3        &#x4E58;&#x6CD5;\n");
	printf("4        &#x9664;&#x6CD5;\n");
	printf("5        &#x663E;&#x793A;&#x83DC;&#x5355;\n");
	printf("6        &#x91CD;&#x65B0;&#x8F93;&#x5165;&#x4E24;&#x4E2A;&#x6574;&#x6570;\n");
	printf("7        &#x9000;&#x51FA;\n");
	printf("*************************\n");
	printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
	int komanda;
	int c1;
	int c2;
	scanf("%d", &komanda);
	while (komanda != 7) {
		if (komanda == 1)
		{
			c1 = a + b;
			printf("&#x6267;&#x884C;&#x52A0;&#x6CD5;&#x8FD0;&#x7B97;, %d + %d = %d\n", a, b, c1);
			printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
			scanf("%d", &komanda);
		} else if (komanda == 2)
		{
			c1 = a - b;
			printf("&#x6267;&#x884C;&#x51CF;&#x6CD5;&#x8FD0;&#x7B97;, %d - %d = %d\n", a, b, c1);
			printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
			scanf("%d", &komanda);
		} else if (komanda == 3)
		{
			c1 = a * b;
			printf("&#x6267;&#x884C;&#x4E58;&#x6CD5;&#x8FD0;&#x7B97;, %d * %d = %d\n", a, b, c1);
			printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
			scanf("%d", &komanda);
		} else if (komanda == 4)
		{
			c2 = a / b;
			printf("&#x6267;&#x884C;&#x9664;&#x6CD5;&#x8FD0;&#x7B97;&#xFF0C;%d / %d = %0.3f\n", a, b, c2);
			printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
			scanf("%d", &komanda);
		} else if (komanda == 5)
		{
			printf("*************************\n");	
			printf("1        &#x52A0;&#x6CD5;\n");
			printf("2        &#x51CF;&#x6CD5;\n");
			printf("3        &#x4E58;&#x6CD5;\n");
			printf("4        &#x9664;&#x6CD5;\n");
			printf("5        &#x663E;&#x793A;&#x83DC;&#x5355;\n");
			printf("6        &#x91CD;&#x65B0;&#x8F93;&#x5165;&#x4E24;&#x4E2A;&#x6574;&#x6570;\n");
			printf("7        &#x9000;&#x51FA;\n");
			printf("*************************\n");
			printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
			scanf("%d", &komanda);			
		} else if (komanda == 6)
		{
			printf("&#x8BF7;&#x8F93;&#x5165;&#x4E24;&#x4E2A;&#x6574;&#x6570;&#xFF1A;\n");
			scanf("%d %d", &a, &b);
			printf("&#x8BF7;&#x9009;&#x62E9;&#x6307;&#x4EE4;&#xFF1A;");
			scanf("%d", &komanda);	
		} else if (komanda == 7)
		{
			exit(0);
		} else {
			printf("&#x975E;&#x6CD5;&#x6307;&#x4EE4;&#xFF01;\n");
		}
	}

	return 0;
}
