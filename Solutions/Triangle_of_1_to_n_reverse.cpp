#include<stdio.h>
int main()
{
	int i,n,j,a;
	printf("Enter the number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
		printf(" ");
		}
		for(a=1;a<=i;a++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
