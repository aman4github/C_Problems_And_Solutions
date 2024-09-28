#include<stdio.h>
int main()
{
	int i,n,j,a;
	printf("Enter the number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf(" ");
		}
	
		for(a=i;a<=n;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
