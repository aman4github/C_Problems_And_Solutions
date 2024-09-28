#include<stdio.h>
int main()
{
	int arr[100], n, i;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	n = n - 1;
	printf("After deletion the Array is : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
