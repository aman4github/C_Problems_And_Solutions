#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of 1st number : ");
	scanf("%d",&a);
	printf("Enter the value of 2nd number : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("Maximum is %d",a);
	}
	else
	{
		printf("Maximum is %d",b);
	}
	return 0;
}
