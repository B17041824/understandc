#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sleep(unsigned long ms)
{
	clock_t endsleep;
	endsleep = clock() + ((ms * CLK_TCK)/1000);
	while (clock() < endsleep) {}
}

void sql_1(char a[], int i)
{

	for (i; i < 8; i++)
	{
		printf("%c", a[i]);
	}
}

void sql_2(char b[], int i)
{
	int j;
	for (j = 0; j < i + 1; j++)
	{
		printf("%c", b[j]);
	}
}

int main(void)
{
	int i = 0;
	char a[8] = { 't','e','s','t','1','2','3','4' };
	char b[8] = { 't','e','s','t','1','2','3','4' };
	while (1)
	{
		system("cls");
		sql_1(a, i);
		sql_2(a, i);
		i++;
		if (i == 8)
		{
			i = 0;
		}
		sleep(1000);
	}
	return 0;
}