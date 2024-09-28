#include<stdio.h>
int main()
{
	int n,i,a,b=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	a = n;
	while(a!=0)
	{
		i = a % 10;
		b = b * 10 + i;
		a = a / 10;
	}
	printf("Reverse of the number %d is %d.",n,b);
	return 0;
}
