#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n % i == 0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
	printf("%d is neither prime nor composite.",n);
	else if(flag==1)
	printf("%d is not a prime number.",n);
	else
	printf("%d is a prime number.",n);
	return 0;
}
