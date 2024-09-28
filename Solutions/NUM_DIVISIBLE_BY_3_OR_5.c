#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the range : ");
	scanf("%d",&n);
	printf("Numbers which are divisible by 3 or 5 between %d and %d are : \n",i,n);
	while(i<=n)
	{
		if(i%3==0 || i%5==0)
			printf("%d, ",i);
		i++;
	}
	return 0;
}
