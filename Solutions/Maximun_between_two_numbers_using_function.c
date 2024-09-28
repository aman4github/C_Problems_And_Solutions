#include<stdio.h>
int max(int,int);
int main()
{
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	c = max(a,b);
	printf("Maximum between %d and %d = %d",a,b,c);
	return 0;
}

int max(int a, int b)
{
	int max;
	max = (a>b)?a:b;
	return max;
}
