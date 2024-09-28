#include<stdio.h>
#include<string.h>
int main()
{
	// FOR SINGLE STRING REVERSE
	char str[100];
	printf("Enter the string : ");
	gets(str);
	strrev(str);
	printf("Reversed string : ");
	puts(str);
	return 0;
}
