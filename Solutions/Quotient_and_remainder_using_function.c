#include<stdio.h>
int div(int, int);
int rem(int,int);
int main()
{
	int a,b,c,d;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	c = div(a,b);
	d = rem(a,b);
	printf("Quotient of %d and %d = %d and Remainder is %d",a,b,c,d);
	return 0;
}

int div (int a, int b)
{
	int c,d;
	c = a / b;
	return c;
}

int rem (int a, int b)
{
	int d;
	d = a % b;
	return d;
}
