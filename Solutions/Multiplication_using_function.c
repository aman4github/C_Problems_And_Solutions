#include<stdio.h>
int mul(int, int);
int main ()
{
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	c = mul(a,b);
	printf("%d multiplied by %d = %d",a,b,c);
	return 0;
}

int mul (int a, int b)
{
	int c;
	c = a * b;    /// we also can just write return (a*b);
	return c;
}
