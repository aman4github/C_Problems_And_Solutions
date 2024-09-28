#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the range : ");
	scanf("%d",&n);
	printf("The even numbers between %d and %d are : \n",i,n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d, ",i);
			sum = sum + i;
		}
			i++;
	}
	printf("\nSum of all even numbers is : %d",sum);
	return 0;
}
