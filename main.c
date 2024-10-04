#include<stdio.h>
#include"date.h"
#define DEBUG 1
#define ERROR -1
int year, month ,day, hour, minute ,second;


int i_get_initial_day()
{
	printf("Please input year:\n");
	scanf("%d",&year);
	printf("Please input month:\n");
	scanf("%d",&month);
	if (month <= 0 || month >= 13)
	{
		printf("Invalid input\n");
		return ERROR;
	}
	printf("Please input day:\n");
	scanf("%d",&day);
	if (day <= 0 || day >= 32)
	{
		printf("Invalid input\n");
		return ERROR;
	}
	printf("Please input hour\n");
	scanf("%d",&hour);
	if (hour < 0 || hour >= 24)
	{
		printf("Invalid input\n");
		return ERROR;
	}
	printf("Please input minute\n");
	scanf("%d",&minute);
	if (minute < 0 || minute >= 60)
	{
		printf("Invalid input\n");
		return ERROR;
	}
	printf("Please input second\n");
	scanf("%d",&second);
	if (second < 0 || second >= 60)
	{
		printf("Invalid input\n");
		return ERROR;
	}

	#if DEBUG
		printf("Got year:%d month:%d day:%d hour:%d minutes:%d second:%d\n",
		year,month,day,hour,minute,second);
	#endif

	return 0;
}

void v_display()
{
	
}

int main()
{
	printf("Hello world!\n");
	
	i_get_initial_day();
	
	/*int input;
	while(1)
	{
		scanf("%d",&input);
		if(input%4 == 0 || input%400 == 0)
		{
			printf("Number:%d is leap year\n",input);
		}
		else
			printf("Number:%d is not a leap year\n",input);
	}*/
	return 0;
}
