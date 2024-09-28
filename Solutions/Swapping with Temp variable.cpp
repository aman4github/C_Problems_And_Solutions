#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the value of X and Y : ");
	scanf("%d %d",&x,&y);
	printf("Before swapping X = %d and Y = %d\n",x,y);
	z = x;
	x = y;
	y = z;
	printf("After swapping X = %d and Y = %d",x,y);
	return 0;
}
