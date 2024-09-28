#include<stdio.h>
int main()
{
	int num;
	printf("Enter the week number : ");
	scanf("%d",&num);
	switch(num)
	{
		case 1 :
			printf("Sunday");
			break;	
		case 2 :
			printf("Monday");
			break;	
		case 3 :
			printf("Tuesday");
			break;
		case 4 :
			printf("Wednesday");
			break;
		case 5 :
			printf("Thursday");
			break;
		case 6 :
			printf("Friday");
			break;
		case 7 :
			printf("Saterday");
			break;
		default :
			printf("Not a valid input");
			break;								
	}
	return 0;
}
