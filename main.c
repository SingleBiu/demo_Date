/*
 * @Author: SingleBiu
 * @Date: 2024-10-06 17:12:42
 * @LastEditors: SingleBiu
 * @LastEditTime: 2024-10-06 17:17:59
 * @Description: file for demo_Date
 */
#include<stdio.h>
#include<stdlib.h>
#include"date.h"
int year, month ,day, hour, minute ,second;

int i_get_initial_day()
{
	printf("Please input year:\n");
	scanf("%d",&year);
	if (year < 2024 )
	{
		printf("Invalid input\n");
		return ERROR;
	}
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
	while (1)
	{
		if (year%4 == 0 || year%400 == 0)
		{
			#if DEBUG
				printf("Year:%d is leap year\n",year);
			#endif

			#if 1

				sleep(1);
				printf("Current time: %d/%d/%d %d:%d:%d\n",year,month,day,hour,minute,second);
				second++;
				if (second >59)
				{
					second = 0;
					minute ++;
				}
				if (minute > 59)
				{
					minute = 0;
					hour++;
				}
				if (hour > 23)
				{
					day++;
					hour = 0;
				}
				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				{
					if (day > 31)
					{
						day = 1;
						month++;
					}
				}else if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					if (day > 30)
					{
						day = 1;
						month++;
					}
				}
				else
				{
					if (day >29)
					{
						day = 1;
						month++;
					}
				}				
				if (month > 12)
				{
					year++;
					month = 1;
				}
				
			#endif
		}
		else
		{
			#if DEBUG
				printf("Year:%d is not a leap year\n",year);
			#endif

			sleep(1);
			printf("Current time: %d/%d/%d %d:%d:%d\n",year,month,day,hour,minute,second);
			second++;
			if (second >59)
			{
				second = 0;
				minute ++;
			}
			if (minute > 59)
			{
				minute = 0;
				hour++;
			}
			if (hour > 23)
			{
				day++;
				hour = 0;
			}
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				if (day > 31)
				{
					day = 1;
					month++;
				}
			}else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if (day > 30)
				{
					day = 1;
					month++;
				}
			}
			else
			{
				if (day >28)
				{
					day = 1;
					month++;
				}
			}				
			if (month > 12)
			{
				year++;
				month = 1;
			}
		}
	}
}

int main()
{
	printf("Hello! Welcome to use this time tool.\n");

begin:
	system("clear");
	int flag = 0;
	flag = i_get_initial_day();
	
	if (-1 == flag)
	{
		goto begin;
	}
	
	v_display();

	return 0;
}
