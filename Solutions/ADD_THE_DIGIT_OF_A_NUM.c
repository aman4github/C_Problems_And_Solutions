#include<stdio.h>
int main()
{
	int i,n,a=0,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		a = n % 10;
		sum = sum + a;
		n = n / 10;
	}
	printf("Sum of digits : %d",sum);
	return 0;
}
