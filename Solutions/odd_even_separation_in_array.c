#include<stdio.h>
int main()
{
	int arr[100], odd[100], even[100];
	int n, i=0, j=0, k;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			even[j] = arr[i];
			j++;
		}
		else
		{
			odd[k] = arr[i];
			k++;
		}
	}
	printf("Even numbers are : \n");
	for(i = 0; i < j; i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\nOdd numbers are : \n");
	for(i = 0; i < k; i++)
	{
		printf("%d\t",odd[i]);
	}
	return 0;
}
