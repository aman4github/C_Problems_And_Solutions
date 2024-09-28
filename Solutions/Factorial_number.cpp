#include<stdio.h>
int main()
{
	int n,num=1,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
	num=num*i;
	}
	printf("The factorial of %d = %d",n,num);
	return 0;
}
