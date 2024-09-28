#include<stdio.h>
int main()
{
	char str[100], a;
	int b, i;
	printf("Enter the string(Use '_' instead of space to get right output): ");
	scanf("%s",str);
	//gets(str);
	b = (int)str[0];
	if(b >= 97 && b <= 122)
	{
		a = (char)(b - 32);
		str[0] = a;
	}
	for(i = 1; i < str[i] != '\0'; i++)
	{
		if(str[i] == '_')
 		{
  			b = (int)str[i+1];
 			if(b >=97 && b <=122)
   			{
			   	a = (char)(b - 32);
   				str[i+1] = a;
   			}
		}
	}
	printf("Formatted string : %s",str);
	return 0;
}
