#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of 1st angel value : ");
	scanf("%d",&a);
	printf("Enter the value of 2nd angel value : ");
	scanf("%d",&b);
	printf("Enter the value of 3rd angel value : ");
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("This is a valid Triangle.");
	}
	else
	{
		printf("This is not a valid Triangle.");
	}
	return 0;
}
