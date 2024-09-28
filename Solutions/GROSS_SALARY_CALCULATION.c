#include<stdio.h>
int main()
{
	float basic,da,hra,gross=0;
	printf("Enter the basic salary : ");
	scanf("%f",&basic);
	if(basic <= 10000)
	{
		hra = basic * 20/100;
		da = basic * 80/100;
	}
	else if(basic <= 20000)
	{
		hra = basic * 25/100;
		da = basic * 90/100;
	}
	else if(basic > 20000)
	{
		hra = basic * 30/100;
		da = basic * 95/100;
	}
	else
	{
		
	}
	
	gross = basic + hra + da;
	printf("Gross salary = %f",gross);
	return 0;
}
