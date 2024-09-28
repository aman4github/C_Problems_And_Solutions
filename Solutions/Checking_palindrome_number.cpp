#include<stdio.h>
int main()
{
	int n,a,b = 0,c;
	printf("Enter the number : ");
	scanf("%d",&n);
	c = n;
	while(c!=0)
	{
		a = c % 10;
		c = c / 10;
		b = b * 10 + a;
	}
	printf("%d\n",b);
	if(n==b)
	printf("%d = %d is a Palindrome number",n,b);
	else
	printf("%d = %d is not a Palindrome number",n,b);
	return 0;
}
