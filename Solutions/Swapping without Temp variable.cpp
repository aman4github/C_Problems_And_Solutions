#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of X and Y : ");
	scanf("%d %d",&x,&y);
	printf("Before swapping X = %d and Y = %d\n",x,y);
	x = x+y;
	y = x-y;
	x = x-y;
	printf("After swapping X = %d and Y = %d",x,y);
	return 0;
}
