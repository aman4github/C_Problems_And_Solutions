#include<stdio.h>
int main()
{
	float area,circumference,pi = 3.14,r;
	printf("Enter the Radius value : ");
	scanf("%f",&r);
	
	area = pi*r*r;
	printf("Area of circle : %f\n",area);
	
	circumference = pi*r*2;
	printf("Circumference of circle : %f",circumference);
	
	return 0;
}
