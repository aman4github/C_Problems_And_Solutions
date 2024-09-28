#include<stdio.h>
int main()
{
	float gs,bs,da,hra;
	printf("Enter the value of Basic Salary : ");
	scanf("%f",&bs);
	
	if(bs<10000)
	{
		da = bs * 0.8;
		hra = bs * 0.2;
	}
	
	else if(bs>=10000 && bs<20000)
	{
		da = bs * 0.95;
		hra = bs * 0.3;
	}
	
	else(bs>=20000);
	{
		da = bs * 0.9;
		hra = bs * 0.25;
	}
	
	gs = bs + hra + da;
		printf("Gross Salary : %f",gs);
	
	return 0;
}
