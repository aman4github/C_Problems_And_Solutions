#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter the range : ");
	scanf("%d",&n);
	printf("Sum of all numbers between %d and %d = \n",i,n);
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
