#include<stdio.h>
int main()
{
	float cp,sp;
	printf("Enter Cost Price : ");
	scanf("%f",&cp);
	
	printf("Enter Selling Price : ");
	scanf("%f",&sp);
	
	if(sp>cp)
		printf("Profit");
		
	else if(cp>sp)
		printf("Loss");
		
	else
		printf("Not Valid");
		
	return 0;	
}
