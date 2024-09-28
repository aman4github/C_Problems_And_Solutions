#include<stdio.h>
int main()
{
	int n,b=0,a=0,i,f=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		b = n % 10;
		a = a + b;
		n = n / 10;
	}
	printf("Sum of all digits = %d",a);
	
	for(i=1;i<=a;i++)
	{
		f = f * i;
	}
	printf("\nFactorial = %d",f);
	return 0;
}
