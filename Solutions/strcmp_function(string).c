#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	printf("Enter the 1st string : ");
	gets(str1);
	printf("Enter the 2nd string : ");
	gets(str2);
	int s = strcmp(str1, str2);
	if(s == 0)
	{
		printf("Both string are same in size");
	}
	else if(s > 0)
	{
		printf("1st string is greater than 2nd string");
	}
	else
	{
		printf("2nd string is greater than 1st string");
	}
	return 0;
}
