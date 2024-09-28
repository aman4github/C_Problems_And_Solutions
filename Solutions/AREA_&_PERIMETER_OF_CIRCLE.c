#include<stdio.h>
#define PI 3.14
int main()
{
	float r,area,perimeter;
	printf("Enter the radius : ");
	scanf("%f",&r);
	area = PI * r * r;
	printf("Area of this circle is : %f",area);
	perimeter = 2 * PI * r;
	printf("\nPerimeter of this circle is : %f",perimeter);
	return 0;
}
