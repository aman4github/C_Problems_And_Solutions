#include<stdio.h>
int main()
{
	int n1, n2, a, ans = 0;
	printf("Enter the 1st number : ");
	scanf("%d",&n1);
	printf("Enter the 2nd number : ");
	scanf("%d",&n2);
	printf(" Press 1 for +\n Press 2 for -\n Press 3 for *\n Press 4 for /\nEnter the operator : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1 :
		{
			ans = n1 + n2;
			printf("%d + %d = %d",n1,n2,ans);
			break;
		}
		case 2 :
		{
			ans = n1 - n2;
			printf("%d - %d = %d",n1,n2,ans);
			break;
		}
		case 3 :
		{
			ans = n1 * n2;
			printf("%d * %d = %d",n1,n2,ans);
			break;	
		}
		case 4 :
		{
			ans = n1 / n2;
			printf("%d / %d = %d",n1,n2,ans);
			break;
		}
		default :
		{
			printf("Invalid");
			break;
		}
	}
	return 0;
}
