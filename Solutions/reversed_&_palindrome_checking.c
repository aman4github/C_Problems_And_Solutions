#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	printf("Enter the word : ");
	gets(str1);
	strcpy(str2, str1);
	strrev(str2);
	printf("Reversed string : ");
	puts(str2);
	
	int s = strcmp(str1,str2);
	if(s == 0)
	{
		printf("The string is palindrome");
	}
	else
	{
		printf("The string is not palindrome");
	}
	return 0;
}
