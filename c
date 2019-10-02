打印任意菱形
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j, k, m, n, p;
	printf("请输入一个参数");
	scanf_s("%d", &p);
	for (i = 1; i <= p; ++i)
	{
		for (j = p- i; j > 0; --j)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= p-1; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf(" ");
		}
		for (k = 1; k <= 2*p-1 - 2 * i; ++k)
		{
			printf("*");
       }
  }
      system("pause");
      return 0;
    }
     
