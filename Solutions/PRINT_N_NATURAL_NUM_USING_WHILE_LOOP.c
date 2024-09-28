#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Number between %d and %d are : \n",i,n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}
