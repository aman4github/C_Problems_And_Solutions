#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter the string : ");
	gets(str);
	int i, j, lower = 0, upper = 0;
	for(i = 0; i < strlen(str); i++)
	{
		char a = str[i];
		if( islower(a) )
		{
			lower++;
		}
		else if( isupper(a) )
		{
			upper++;
		}
		else
		{
			//
		}
	}
	printf("Alphabets in upper case are : %d\n",upper);
	printf("Alphabets in lower case are : %d",lower);
	return 0;
}
