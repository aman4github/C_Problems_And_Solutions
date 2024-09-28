#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter thr value of b : ");
	scanf("%d",&b);
	c= a/b;
	d= a%b;
	printf("Quotient & Remainder : %d and %d",c,d);
	return 0;
}
