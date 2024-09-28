#include<stdio.h>
int square(int);
int main ()
{
	int n,a;
	printf("Enter the number : ");
	scanf("%d",&n);
	a = square(n);
	printf("Square of %d = %d",n,a);
	return 0;
}
int square(int a)
{
	int i;
	i = a * a;  /// we also can just write return (a * a);
	return i;
}
