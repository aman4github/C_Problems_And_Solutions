#include<stdio.h>
int main()
{
	int n,i,j,s=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			s = s + i;
		else
			s = s - i;
	}
	printf("Value of this series : %d",s);
	return 0;
}
