#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n>100)
		printf("%d is positive and greater than 100",n);
		else
		printf("%d is positive and less than 100",n);
	}
	else
	{
		if(n<-100)
		printf("%d is negative and less than 100",n);
		else
		printf("%d is negative and greater than -100",n);
	}
	return 0;
}
