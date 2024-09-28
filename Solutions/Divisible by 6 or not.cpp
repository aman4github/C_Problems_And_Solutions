#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num%2 ==0 && num %3 == 0)
		printf("The number is divisible by 6");
		
	else
		printf("The number is not divisible by 6");
		
	return 0;		
}
