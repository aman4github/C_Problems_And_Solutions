#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	printf("Enter the string : ");
	gets(str1);
	char str2[100];
	strcpy(str2, str1);
	printf("Copied string is : ");
	puts(str2);
	return 0;
}
