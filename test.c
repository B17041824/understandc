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
		printf("������һ��1-9�����ֽ��г�ǩ��\n");
		scanf_s("%d", &number);
		if (number > 0 && number <= 10)
		{
			printf("������������ǣ�%d\n", number);
			srand((unsigned)time(NULL));
			if (rand() % 100 + 1 > 0 && rand() % 100 + 1 <= 5) {
				printf("���鵽�˴󼪣�\n");
			}
			else if (rand() % 100 + 1 > 5 && rand() % 100 + 1 <= 15) {
				printf("���鵽���м���\n");
			}
			else if (rand() % 100 + 1 > 15 && rand() % 100 + 1 <=30) {
				printf("���鵽��С����\n");
			}
			else if (rand() % 100 + 1 > 30 && rand() % 100 + 1 <= 60) {
				printf("���鵽�˼���\n");
			}
			else if (rand() % 100 + 1 > 60 && rand() % 100 + 1 <= 80) {
				printf("���鵽��ĩ����\n");
			}
			else if (rand() % 100 + 1 > 80 && rand() % 100 + 1 <= 95) {
				printf("���鵽���ף�\n");
			}
			else if (rand() % 100 + 1 > 95 && rand() % 100 + 1 <= 100) {
				printf("���鵽�˴��ף�\n");
			}
			printf("����˳����������֣�0\n");

		}
		else
		{
			if (number==0)
			{
				return 0;
			}
			else
			{
				printf("��������Ч���֣�");
			}
		}
	}
	
}