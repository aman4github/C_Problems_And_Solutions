#include<stdio.h>

void sum();

int main()
{
	sum();
	return 0;
}

void sum()
{
	int a,b,add;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	add = a + b;
	printf("ans = %d",add);
}

// int funcName(int)
// int funcName()
// void funcName(int) 
// void funcName()