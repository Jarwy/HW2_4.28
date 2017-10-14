#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	char p;
	int s,o;
	double d,h;

	printf("Enter your position code(Manager:1,Hourly worker:2,Commision worker:3,Piecework:4):");
	scanf_s("%c",&p);

	switch (p)
	{
		case '1':
		{
			printf("Your are Manager,");
			printf("and your weekly salary is NT$12500.\n\n");
		}
		break;

		case '2':
		{
			printf("Your weekly hour:");
			scanf_s("%lf", &h);

			d = h - 40;

			if (d > 0)
			{
				printf("Your are Hourly worker,");
				printf("and your weekly salary is NT$%.2f\n\n", 40 * 10 + d * 15);
			}
			else
			{
				printf("Your are Hourly worker,");
				printf("and your weekly salary is NT$%.2f\n\n", h * 10);
			}
		}
		break;

		case '3':
		{
			printf("Your gross weekly seles:");
			scanf_s("%d", &s);
		
			printf("Your are Commision worker,");
			printf("and your weekly salary is NT$%d\n\n", 250 + s * 57 / 1000);
		}
		break;

		case '4':
		{
			printf("How many products you have prodused this week:");
			scanf_s("%d", &o);

			printf("Your are Pieceworker,");
			printf("and your weekly salary is NT$%d\n\n", o*2);
		}
		break;

		default:
		{
			printf("wrong\n\n");
		}
	}

	system("pause");
	return 0;
}