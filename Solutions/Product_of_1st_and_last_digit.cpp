#include<stdio.h>
int main()
{
	int n,a,b,product = 0;
	printf("Enter the num : ");
	scanf("%d",&n);
	a = n % 10;
	while(n>=10)
	{
		n = n / 10;	
	}
	b = n;
	product = a * b;
	printf("Product of 1st and last digit = %d",product);
	return 0;
}
