#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the value of A and B and c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	    printf("Maximum = %d",a);
	    
	else if(b>c && b>a)
		printf("Maximum = %d",b);	    

	else
		printf("Maximum = %d",c);
	return 0;
}
