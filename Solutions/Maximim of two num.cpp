#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of A and B : ");
	scanf("%d %d",&a,&b);
	if(a>b)
	printf("Maximum = %d",a);
	else
	printf("Maximum = %d",b);
	return 0;
}
