#include<stdio.h>
int main()
{
	int n,a,b = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		a = n % 10;
		n = n/10;
		b = b * 10 + a;
	}
	printf("%d",b);
	return 0;
}
