#include<stdio.h>
int main()
{
	char str[100];
	int a, i, upper = 0, lower = 0;
	printf("Enter the string (use '_' instead of space): ");
	scanf("%s",str);
	for(i = 0; i < str[i] != '\0'; i++)
	{
		a = (int)str[i];
 		if(a >= 97 && a <= 122)
		{
			lower++;
		}
 		if(a >= 65 && a <= 90)
		{
			upper++;
		}
	}
	printf("Number of upper case alphabet is : %d\n",upper);
	printf("Number of lower case alphabet is : %d",lower);
	return 0;
}

