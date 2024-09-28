#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100], a;
	int i;
	printf("Enter the string : ");
	gets(str);
	a = str[0];
	if(islower(a))
	{
		str[0] = toupper(a);
	}
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == ' ')
 		{
  			a = str[i+1];
  			if(islower(a))
  			{
  			str[i+1] = toupper(a);
  			}
  		}
	}
	printf("Formatted string : ");
	puts(str);
}
