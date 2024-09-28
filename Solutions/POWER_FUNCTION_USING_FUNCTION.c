#include<stdio.h>
int power(int, int);
int main()
{
	int n, n1,a;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the power : ");
	scanf("%d",&n1);
	a = power(n,n1);
	printf("The ans is = %d",a);
	return 0;
}

int power(int n, int n1)
{
	int i;
	long pow=1;
	for(i = 1; i <= n1; i++)
	{
		pow = pow * n;
	}
	return pow;
}

