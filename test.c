#include <stdio.h>
#include "pch.h"
#include <stdlib.h>
#include <time.h>
#include "test.h"

int main()
{
	int number;
	
	while(1)
	{
		printf("请输入一个1-9的数字进行抽签：\n");
		scanf_s("%d", &number);
		if (number > 0 && number <= 10)
		{
			printf("您输入的数字是：%d\n", number);
			srand((unsigned)time(NULL));
			if (rand() % 100 + 1 > 0 && rand() % 100 + 1 <= 5) {
				printf("您抽到了大吉！\n");
			}
			else if (rand() % 100 + 1 > 5 && rand() % 100 + 1 <= 15) {
				printf("您抽到了中吉！\n");
			}
			else if (rand() % 100 + 1 > 15 && rand() % 100 + 1 <=30) {
				printf("您抽到了小吉！\n");
			}
			else if (rand() % 100 + 1 > 30 && rand() % 100 + 1 <= 60) {
				printf("您抽到了吉！\n");
			}
			else if (rand() % 100 + 1 > 60 && rand() % 100 + 1 <= 80) {
				printf("您抽到了末吉！\n");
			}
			else if (rand() % 100 + 1 > 80 && rand() % 100 + 1 <= 95) {
				printf("您抽到了凶！\n");
			}
			else if (rand() % 100 + 1 > 95 && rand() % 100 + 1 <= 100) {
				printf("您抽到了大凶！\n");
			}
			printf("如果退出请输入数字：0\n");

		}
		else
		{
			if (number==0)
			{
				return 0;
			}
			else
			{
				printf("请输入有效数字！");
			}
		}
	}
	
}