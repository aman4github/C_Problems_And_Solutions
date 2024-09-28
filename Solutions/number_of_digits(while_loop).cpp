#include<stdio.h>
int main()
{
	int a,c = 0;
	printf("Enter the number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		c++;
	}
	printf("No. of digits = %d",c);
	return 0;
}
