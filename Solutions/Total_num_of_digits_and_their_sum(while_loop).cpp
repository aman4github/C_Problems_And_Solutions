#include<stdio.h>
int main()
{
	int r,a,c = 0,sum = 0;
	printf("Enter the number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		r = a%10;
		a=a/10;
		c++;
		sum = sum + r;
	}
	printf("No. of digits = %d\n",c);
	printf("Sum of digits : %d",sum);
	return 0;
}
