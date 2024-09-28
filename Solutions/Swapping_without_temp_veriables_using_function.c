#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b,c;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	printf("Before swapping a = %d and b = %d\n",a,b);
	c = swap(a,b);
	return 0;
}

int swap(int a,int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping a = %d and b = %d",a,b);
	return 0;
}
