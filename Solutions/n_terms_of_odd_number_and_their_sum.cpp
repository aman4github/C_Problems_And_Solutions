#include<stdio.h>
int main()
{
	int i, n , num = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (i = 1; i <= n; i+=2)
	{
	printf("%d\n",i);
	num = num + i;
	}
	printf("Sum = %d",num);
	return 0;
}
