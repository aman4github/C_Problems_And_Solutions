#include<stdio.h>
int main()
{
	int a=0, b=1, n, i, c;
	printf("Enter the number : ");
	scanf("%d",&n);
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
