#include<stdio.h>
int fibonacci(int);
int main()
{
	int n, fibo;
	printf("Enter the number : ");
	scanf("%d",&n);
	fibo = fibonacci(n);
	return 0;
}

int fibonacci(int n)
{
	int i, c=0, a=0, b=1;
	printf("Fibonacci series from %d to %d : \n",a,n);
	printf("%d %d",a,b);
	for(i=1; i<=n-2; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(" %d",c);
	}
	return 0;
}

