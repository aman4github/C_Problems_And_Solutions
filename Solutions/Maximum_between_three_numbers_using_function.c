#include<stdio.h>
int max(int,int,int);
int main()
{
	int a,b,c,d;
	printf("Enter the numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	d = max(a,b,c);
	return 0;
}

int max(int a, int b, int c)
{
	if(a>b && a>c)
	printf("Maximum is %d",a);
	else if(b>a && b>c)
	printf("Maximum is %d",b);
	else
	printf("Maximum is %d",c);
	return 0;
}

