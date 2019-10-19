#include <stdio.h>
#include <stdlib.h>

int sleep(unsigned long ms)
{
	int i,j=0;
	for (i = 0; i < ms*400000; i++)
	{
		j++;
	}
	return ms;
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
	for (j = 0; j < i+1; j++)
	{
		printf("%c", b[j]);
	}
}
int main(void)
{   
	//loop:
	//printf("");
	int i=0;
	
	char a[8] = { 't','e','s','t','1','2','3','4' };
	char b[8] = { 't','e','s','t','1','2','3','4' };
	while (1)
	{
		system("cls");
		
		sql_1(a,i);

		sql_2(a,i);
		i++;
		if (i == 7)
		{
			i = 0;
		}
		sleep(1000);
		
	}
	
	
	return 0;
}

