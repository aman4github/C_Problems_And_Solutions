#include<stdio.h>
int main()
{
	float beng,eng,math,hist,geo,total,per;
	
	printf("Enter the value of Beng : ");
	scanf("%f",&beng);
	per = (beng*100)/100;
	printf("Percentage of beng : %f\n",per);
	
	printf("Enter the value of Eng : ");
	scanf("%f",&eng);
	per = (eng*100)/100;
	printf("Percentage of eng : %f\n",per);
	
	printf("Enter the value of Math : ");
	scanf("%f",&math);
	per = (math*100)/100;
	printf("Percentage of math : %f\n",per);
	
	printf("Enter the value of Hist : ");
	scanf("%f",&hist);
	per = (hist*100)/100;
	printf("Percentage of hist : %f\n",per);
	
	printf("Enter the value of Geo : ");
	scanf("%f",&geo);
	per = (geo*100)/100;
	printf("Percentage of geo : %f\n",per);
		
	total = (beng+eng+math+hist+geo);
	printf("Total = %f\n",total);	
		
	per = (beng+eng+math+hist+geo)*0.2;
		printf("Percentage : %f\n",per);
	
	if(per>=90)
		printf("Grade : A");
		
	else if(per>=80)
		printf("Grade : B");
		
	else if(per>=70)
		printf("Grade : c");
		
	else if(per>=60)
		printf("Grade : D");
		
	else if(per>=40)
		printf("Grade : E");
	
	else if(per<40)
		printf("Grade : F");
		
	else
		printf("Not a valid input");
		
	return 0;							
}
