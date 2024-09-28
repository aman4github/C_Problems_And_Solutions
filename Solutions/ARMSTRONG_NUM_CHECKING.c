#include<math.h>
#include<stdio.h>

int arm(int, int);
int main()
{
	int n,a=0,b=0,c,i=0,d;
	printf("Enter the number : ");
	scanf("%d",&n);
	a=n;
	d=n;
	while(a!=0)
	{
		a = a / 10;
		i++;
	}
	printf("Total digits in the number : %d\n",i);
	b=i;
	c = arm(d,b);
	if(c==n)
	printf("Armstrong number.");
	else
	printf("Not a Armstrong number.");
	
	return 0;
}

int arm(int a, int b)
{
	int c,sum = 0;
	while(a!=0)
	{
		c = a % 10;
		sum = sum + pow(c,b);
		a = a / 10;
	}
	return sum;
}
