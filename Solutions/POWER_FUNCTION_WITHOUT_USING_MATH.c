#include<stdio.h>
int main()
{
	int i, n, n1;
	long pow=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the power : ");
	scanf("%d",&n1);
	for(i = 1; i <= n1; i++)
	{
		pow = pow * n;
	}
	printf("Ans is = %d",pow);
	return 0;
}

