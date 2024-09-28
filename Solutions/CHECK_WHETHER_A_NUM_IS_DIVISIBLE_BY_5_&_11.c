#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("The number is divisible by both of them.");
	}
	else if(n%5==0)
	{
		printf("The number is divisible by 5.");
	}
	else if(n%11==0)
	{
		printf("The number is divisible by 11.");
	}
	else
	{
		printf("The number is not divisible by any of them.");
	}
	return 0;
}
