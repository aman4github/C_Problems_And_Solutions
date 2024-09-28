#include<stdio.h>
int check(int);
int main()
{
	int n,a;
	printf("Enter the number : ");
	scanf("%d",&n);
	a = check(n);
	return 0;
}

int check(int b)
{
	if(b%2==0)
	printf("The number %d is a even number",b);
	else
	printf("The number %d is an odd number",b);
	return 0;
}
