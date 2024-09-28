#include<stdio.h>
int main()
{
	float i, average, sum = 0, num;
	printf("Square of 1st 10 natural no. : \n");
	for (i = 1; i <= 10; i++)
	{
	
		num = i * i;
		sum = sum + num;
		printf("%f\n",num);
		
	}
		printf("Total : %f\n",sum);
		average = sum / 10;
		printf("Average = %f",average);
	return 0;
}
