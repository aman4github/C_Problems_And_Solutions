#include<stdio.h>
int main()
{
	float n,s=0,i;
	printf("Enter the limit : ");
	scanf("%f",&n);
	
	for(i=1; i<=n; i++)
	{
		s = s + 1/i;
	}
	
	printf("The ans is : %f",s);
	return 0;
}
