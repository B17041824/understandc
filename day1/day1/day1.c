#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void change(int a, int b[])
{
	int n_1, n_2, n_3, n_4;
	int v = 0;
	n_1 = a / 1000;
	n_2 = (a / 100) - (n_1 * 10);
	n_3 = (a / 10) - ((n_1 * 100) + (n_2 * 10));
	n_4 = a - ((n_1 * 1000) + (n_2 * 100) + (n_3 * 10));
	
	
	b[0] = n_1;
	b[1] = n_2;
	b[2] = n_3;
	b[3] = n_4;
	
}

int judge_1(int a[], int b[],int c)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (b[j] == a[i])
			{
				c++;
			}
		}
	}
	return c;
}

int judge_2(int a[], int b[], int c)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (b[j] == a[i] && j == i)
			{
				c++;
			}
		}
	}
	return c;
}



int main(void)
{
	srand((unsigned)time(NULL));
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int b[4] = { 0 }, c[4] = { 0 };
	int i, j,k=9;
	int rightnum = 0, numad = 0;
	for (i = 0; i < 4; i++)
	{
		j = rand() % (10-i);
		b[i] = a[j];
		if (j != k)
		{
			int temp = a[j];
			a[j] = a[k];
			a[k] = temp;
		}
		k--;
	}

	int z = 0;
	printf("猜一猜4个不重复的数字，请输入4个数字：\n");
	int beg = 1;
	while (beg==1)
	{
		printf("请输入4个数字：\n");
		scanf_s("%d", &z);
		change(z, c);
		if (z < 100 || z>9999)
		{
			printf("输入有误！");
			continue;
		}
		if (c[0] == c[1] || c[0] == c[2] || c[0] == c[3] || c[1] == c[2] || c[1] == c[3] || c[2] == c[3])
		{
			printf("输入有误！");
			continue;
		}

		int right=judge_1(b,c,rightnum);
		int address=judge_2(b, c, numad);
		if (right == 4 && address == 4)
		{
			beg = 0;
			printf("回答正确！\n");
		}
		else
		{
			printf("包含了%d个正确的数字\n",right);
			printf("%d个数字位置正确\n", address);
		}
	}
	system("pause");
	return 0;
}