#include<stdio.h>

int dif(int, int);

int main()
{
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	c = dif(a, b);
	printf("Greater of %d and %d is %d",a,b,c);
	return 0;
}

int dif(int x, int y)
{
	int z;
	z = (x > y ? x : y) ;
	return(z);
}
