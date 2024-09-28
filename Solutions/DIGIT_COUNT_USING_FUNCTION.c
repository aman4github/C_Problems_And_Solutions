#include<stdio.h>
int digit_count(int);
int main()
{
	int n,a;
	printf("Enter the digit : ");
	scanf("%d",&n);
	a = digit_count(n);
	printf("Sum of digits : %d",a);
	return 0;
}

int digit_count(int n)
{
	int sum = 0,a=0;
	while(n!=0)
	{
		a = n % 10;
		sum = sum + a;
		n = n / 10;
	}
	return sum;
}

