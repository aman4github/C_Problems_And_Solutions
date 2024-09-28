#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Prime numbers are : ");
	for(i=1;i<=50;i++)
	{
		num=0;
		for(j=1;j<=50;j++)
		{
			if(i%j==0)
			num++;
		}
		if(num==2)
		printf("%d ");
	}
	return 0;
}
