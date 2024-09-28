#include<stdio.h>
int main()
{
	int n,a,b,sum = 0;
	printf("Enter the num : ");
	scanf("%d",&n);
	a = n % 10;
	while(n>=10)
	{
		n = n / 10;	
	}
	b = n;
	sum = a + b;
	printf("Sum of 1st and last digit = %d",sum);
	return 0;
}
