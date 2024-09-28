#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the angel values : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a+b+c==180)
		printf("This is a valid Triangle");
	
	else
		printf("This is not a valid Triangle");

return 0;
}
