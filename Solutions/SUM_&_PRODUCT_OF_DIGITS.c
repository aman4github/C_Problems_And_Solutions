#include<stdio.h>
int main()
{
	int n,a=0,sum=0,pro=1;
	printf("Enter the digit : ");
	scanf("%d",&n);
	while(n!=0)
	{
		a = n % 10;
		sum = sum + a;
		pro = pro * a;
		n = n / 10;
	}
	printf("Sum of digits : %d\n",sum);
	printf("Product of digits : %d",pro);
	return 0;
}
