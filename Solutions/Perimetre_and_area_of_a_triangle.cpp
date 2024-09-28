#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,perimetre,area,semip;
	printf("Enter the side value of the triangle : ");
	scanf("%f %f %f",&a,&b,&c);
	
	perimetre=a+b+c;
	printf("Perimetre of the triangle is : %f\n",perimetre);
	
	semip = (a+b+c)/2;
	area = sqrt(semip*(semip-a)*(semip-b)*(semip-c));
	printf("Area of the triangle is : %f",area);
	
	return 0;
}
