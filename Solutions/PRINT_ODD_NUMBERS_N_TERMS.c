#include<stdio.h>
int main()
{
	int n, i=1;
	printf("Enter the range : ");
	scanf("%d",&n);
	printf("Odd numbers between %d and %d are : \n",i,n);
	while(i<=n)
	{
		if(i%2==1)
			printf("%d ",i);
		i++;	
	}
	return 0;
}
