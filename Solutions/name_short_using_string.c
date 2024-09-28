#include<stdio.h>
#include<string.h>
int space(char[]);
void capital(char []);
int main()
{
	char str[100],str1[100];
	int s;
	printf("Enter your name : ");
	gets(str);
	
	str1[0] = str[0];
	str1[1] = '.';
	str1[2] = ' ';
	s = space(str);
	
	if(s == 1)
	{
		int i = 0,a,j=3;
		while(str[i] != '\0')
		{
			if(str[i] == ' ')
			{
				a = i + 1;
				break;
			}
			i++;
		}
		while(str[a] != '\0')
		{
			str1[j] = str[a];
			a++;
			j++;
		}
		str1[j] = '\0';
		capital(str1);
	}
	else if(s == 2)
	{
		int i = 0,a;
		while(str[i] != '\0')
		{
			if(str[i] == ' ')
			{
				a = i + 1;
				break;
			}
			i++;
		}
		str1[3] = str[a];
		str1[4] = '.';
		str1[5] = ' ';
		
		int j = 6;
		i = a + 1;
		
		while(str[i] != '\0')
		{
			if(str[i] == ' ')
			{
				a = i + 1;
				break;
			}
			i++;
		}
		
		while(str[a] != '\0')
		{
			str1[j] = str[a];
			a++;
			j++;
		}
		str1[j] = '\0';
		capital(str1);
	}
	else
	{
		printf("Enter your name correctly.");
	}
}

int space (char str[])
{
	int i=0,c=0,l;
	l = strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i] == ' ')
		{
			c++;
		}
	}
	return c;
}

void capital(char str[])
{
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
			continue;
		}
		if(str[i]==' ')
		{
			++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}
	}
	printf("Formatted name : %s",str);
}
