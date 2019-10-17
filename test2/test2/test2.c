#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	int level,sysnum,num,n;
	int sum = 0;
	int i=0, j=1, k=0;
	int a[10000];
	srand((unsigned)time(NULL));
	loop:
	printf("请选择难度等级：\n1:0-9\n2:0-99\n3:0-999\n4:0-9999\n");
	scanf_s("%d", &level);
	switch (level)
	{
	case 1:
		sysnum = rand() % 10; 
		printf("请输入您要猜的次数：\n输入 0 返回上一级\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 0:goto loop;
		default:
			break;
		}
		while (1)
		{
			int min = 0, max = 9;
			end_1:
			printf("请输入您猜的数：(%d-%d)(返回上一级请输入：0)\n", min, max);
			scanf_s("%d", &num);
			switch (num)
			{
			case 0:goto loop;
			default:
				break;
			}
			while (num<min || num>max)
			{
				printf("数字范围出错！");
				goto end_1;
			}
			if ( (n - sum - 1) > 0 )
			{
				if (num < sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，小了\n您还有%d次机会\n", num, n - sum - 1);
					min = num;
					
					
				}
				else if (num > sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，大了\n您还有%d次机会\n", num, n - sum - 1);
					max = num;
					
				}
				else if (num == sysnum)
				{
					printf("恭喜你！猜中了！");
					a[i] = num;
					i++;
					a[i] = sysnum - num;
					i++;
					break;
				}
			}
			else
			{
				printf("对不起，您的机会用完了！");
				a[i] = num;
				i++;
				a[i] = sysnum - num;
				i++;
				break;
			}
			sum++;
			a[i] = num;
			i++;
			a[i] = sysnum - num;
			i++;
			goto end_1;
		}
		break;
	case 2:
		sysnum = rand() % 100; 
		printf("请输入您要猜的次数：\n输入 0 返回上一级\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 0:goto loop;
		default:
			break;
		}
		while (1)
		{
			int min = 0, max = 99;
			end_2:
			printf("请输入您猜的数：(%d-%d)(返回上一级请输入：0)\n", min, max);
			scanf_s("%d", &num);
			switch (num)
			{
			case 0:goto loop;
			default:
				break;
			}
			while (num<min || num>max)
			{
				printf("数字范围出错！");
				goto end_2;
			}
			if ((n - sum - 1) > 0)
			{
				if (num < sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，小了\n您还有%d次机会\n", num, n - sum - 1);
					min = num;
				}
				else if (num > sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，大了\n您还有%d次机会\n", num, n - sum - 1);
					max = num;
				}
				else if (num == sysnum)
				{
					printf("恭喜你！猜中了！");
					a[i] = num;
					i++;
					a[i] = sysnum - num;
					i++;
					break;
				}
			}
			else
			{
				printf("对不起，您的机会用完了！");
				a[i] = num;
				i++;
				a[i] = sysnum - num;
				i++;
				break;
			}
			sum++;
			a[i] = num;
			i++;
			a[i] = sysnum - num;
			i++;
			goto end_2;
		}
		break;
	case 3:
		sysnum = rand() % 1000; 
		printf("请输入您要猜的次数：\n输入 0 返回上一级\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 0:goto loop;
		default:
			break;
		}
		while (1)
		{
			int min=0, max=999;
			end_3:
			printf("请输入您猜的数：(%d-%d)(返回上一级请输入：0)\n",min,max);
			scanf_s("%d", &num);
			switch (num)
			{
			case 0:goto loop;
			default:
				break;
			}
			while (num<min || num>max)
			{
				printf("数字范围出错！\n");
				goto end_3;
			}
			if ((n - sum - 1) > 0)
			{
				if (num < sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，小了\n您还有%d次机会\n", num, n - sum - 1);
					min = num;
				}
				else if (num > sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，大了\n您还有%d次机会\n", num, n - sum - 1);
					max = num;
				}
				else if (num == sysnum)
				{
					printf("恭喜你！猜中了！");
					a[i] = num;
					i++;
					a[i] = sysnum - num;
					i++;
					break;
				}
			}
			else
			{
				printf("对不起，您的机会用完了！");
				a[i] = num;
				i++;
				a[i] = sysnum - num;
				i++;
				break;
			}
			sum++;
			a[i] = num;
			i++;
			a[i] = sysnum - num;
			i++;
			goto end_3;
		}
		break;
	case 4:
		sysnum = rand() % 10000;
		printf("请输入您要猜的次数：\n输入 0 返回上一级\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 0:goto loop;
		default:
			break;
		}
		while (1)
		{
			int min=0, max=9999;
			end_4:
			printf("请输入您猜的数：(%d-%d)(返回上一级请输入：0)\n", min, max);
			scanf_s("%d", &num);
			switch (num)
			{
			case 0:goto loop;
			default:
				break;
			}
			while (num<min || num>max)
			{
				printf("数字范围出错！");
				goto end_4;
			}
			if ((n - sum - 1) > 0)
			{
				if (num < sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，小了\n您还有%d次机会\n", num, n - sum - 1);
					min = num;
				}
				else if (num > sysnum)
				{
					printf("您猜的数字是：%d，没有猜中，大了\n您还有%d次机会\n", num, n - sum - 1);
					max = num;
				}
				else if (num == sysnum)
				{
					printf("恭喜你！猜中了！");
					a[i] = num;
					i++;
					a[i] = sysnum - num;
					i++;
					break;
				}
			}
			else
			{
				printf("对不起，您的机会用完了！");
				a[i] = num;
				i++;
				a[i] = sysnum - num;
				i++;
				break;
			}
			sum++;
			a[i] = num;
			i++;
			a[i] = sysnum - num;
			i++;
			goto end_4;
		}
		break;
	default:
		break;
	}
	system("cls");
	printf("次数:数字:相差:");
	printf("\n");
	for (j; j <= sum+1;) {
		printf("%4d", j);
		j++;
		for (int l = 0; l < 2;l++) {
			printf("%5d", a[k]);
			k++;
		}
		printf("\n");
	}
}



















