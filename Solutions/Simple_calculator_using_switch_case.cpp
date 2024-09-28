#include<stdio.h>
int main()
{
	float a,b,sum,sub,mul,div;
	char sign;
	printf("Enter the operator : ");
	scanf("%c",&sign);
	printf("Enter the 1st number : ");
	scanf("%f",&a);
	printf("Enter the 2nd number : ");
	scanf("%f",&b);
	switch(sign)
	{
		case '+' :
			sum = a + b;
			printf("%f + %f = %f",a,b,sum);
			break;
		
		case '-' :
			sub = a - b;
			printf("%f - %f = %f",a,b,sub);
			break;
			
		case '*' :
			mul = a * b;
			printf("%f * %f = %f",a,b,mul);
			break;
			
		case '/' :
			div = a / b;
			printf("%f / %f = %f",a,b,div);
			break;
			
		default :
			printf("Not valid");
			break;
	}
	return 0;	
}
