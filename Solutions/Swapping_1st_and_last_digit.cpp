#include<stdio.h>
int main()
{
	int n,a,b;
	printf("Enter the number : ");
	scanf("%d",&n);
	a = n % 10;
	while(n>=10)
	{
		n = n / 10;
	}
	b = n;
	printf("Before swapping 1st digit = %d and last digit = %d\n",b,a);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping 1st digit = %d and last digit = %d",b,a);
	return 0;
}
